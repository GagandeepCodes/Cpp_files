order = 4;           % Filter order
cutoff = 0.8;        % Cutoff frequency
[b, a] = butter(order, cutoff);

% Generate some discrete data as input
input_signal = randn(1, 300);  % Random noise as an example

% Apply the filter using 'filter' function
filtered_signal_direct = filter(b, a, input_signal);

% Plot the input and filtered signals
figure;
subplot(2, 1, 1);
plot(input_signal);
title('Input Signal (Direct Form)');
xlabel('Sample Number');

subplot(2, 1, 2);
plot(filtered_signal_direct);
title('Filtered Signal (Direct Form)');
xlabel('Sample Number');

%% cascade
% Define coefficients for first-order section
num_first_order = [1]; % Numerator coefficients for first-order section
den_first_order = [1, -0.5]; % Denominator coefficients for first-order section (1 - 0.5z^(-1))

% Define coefficients for second-order section
num_second_order = [1]; 
den_second_order = [1, -0.8, 0.64]; 
% Create transfer function objects for each section
tf_first_order = tf(num_first_order, den_first_order, 1); % First-order section
tf_second_order = tf(num_second_order, den_second_order, 1); % Second-order section

% Implement cascade form using series function
tf_cascade = series(tf_first_order, tf_second_order);

% Resulting Cascade Form Transfer Function in Terms of z
disp('Cascade Form Transfer Function in Terms of z:');
disp(tf_cascade);

% Plot magnitude and phase response
figure;
bode(tf_cascade);
title('Magnitude and Phase Response of Cascade Form Transfer Function');


%% parallel
order = 4;           % Filter order
cutoff = 0.8;        % Cutoff frequency
[b, a] = butter(order, cutoff);

% Convert the filter to second-order sections (parallel form)
sos = tf2sos(b, a);

% Generate some discrete data as input
input_signal = randn(1, 300);  % Random noise as an example

% Apply the filter in parallel form using 'sosfilt' function
filtered_signal_parallel = sosfilt(sos, input_signal);

% Plot the input and filtered signals
figure;
subplot(2, 1, 1);
plot(input_signal);
title('Input Signal (Parallel Form)');
xlabel('Sample Number');

subplot(2, 1, 2);
plot(filtered_signal_parallel);
title('Filtered Signal (Parallel Form)');
xlabel('Sample Number');