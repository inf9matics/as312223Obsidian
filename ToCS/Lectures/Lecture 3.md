#ToCS #lecture #selfFilled

# Operating systems
## Definition
- it's a piece of software facilitating communication between hardware and other software

## Components
- Kernel
	- reads and writes data to memory
	- facilitating data transfer between devices
	- facilitates network data interpretation
- User Interface
	- CLI (command line interface)
	- GUI (graphical user interface)
	- specialized controllers
- API's (Application Programming Interfaces)

## Computer system
### Structure
- Hardware
- Operating system
- Application programs
- Users

## Tasks of an operating system
1. Provides a file system
2. Provides an environment for program execution
3. Controls input-output devices
4. Error handling

## Division of systems
- Due to way of processing
	1. Direct processing systems
		- Direct interaction between user and the system
		- Task begins immediately
	2. Indirect processing systems
		- Significant delay between submission and execution of a task
		- Impossible to intervene by user
- Due to number of tasks
	1. Single-tasking systems
	2. Multi-tasking systems
- Due to number of users
	1. Single-user systems
	2. Multi-user systems
- Other
	1. Real-time systems
	2. Network and distributed systems
	3. Embedded systems

# Resources in operating systems
## Types of resources
### Hardware
- CPU
- Memory
- I/O Devices
- File system

### Software
- Auxiliary programs and libraries

## Shareability of resources
### Shareable resources
They can be used by several users at the same time

### Non-shareable resources
Are exclusive to 1 user

#### Preemptability
- Preemptable resources can be paused and restarted
- Non-preemptable resources cannot

## Problems with resource management
### Deadlock
#### Definition
Processes are blocking each other from accessing same resource

#### Possible causes
- Mutual exclusion
- Hold and wait
- No preemption
- Circular wait

### Starvation
#### Definition
Process is prevented from using a resource because a higher priority one is currently using it

# Semaphores
## Definition
Semaphores are variables that govern (allow/block) execution of processes. They can be acquired or released.