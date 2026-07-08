LAB_DIR := $(CURDIR)

.PHONY: controller clean

controller-sim:
	$(MAKE) -C .. sim \
		SIM_NAME=controller \
		TB_TOP=testbench \
		SRCS="controller.sv controller_tb.sv" \
		RUN_DIR=$(LAB_DIR)

clean:
	$(MAKE) -C .. clean RUN_DIR=$(LAB_DIR)




# LAB_DIR := $(CURDIR)	#saves path to lab_dir 

# .PHONY: adventure-sim clean #declares targets that are not files

# adventure-sim: #target to run the simulation for adventure, when u run this it will do the stuff under it 
# 	$(MAKE) -C .. sim \ #runs the makefile in the parent directory (Lab4/lab4_fs) and calls the sim target, passing in the variables below
# 		SIM_NAME=adventure \ #assigns the name of the sim
# 		TB_TOP=testbench \ #says what the first module to run is, the testbench module actually has the adventure module, adventure.sv is just where we made it
# 		SRCS="adventure.sv adventure_tb.sv" \ #telling the parent Makefile which files to compile 
# 		RUN_DIR=$(LAB_DIR) #using the old path we found, tells the parent Makefile where to run sim from

# clean: #target to clean up the generated files, when u run this it will do the stuff under it
# 	$(MAKE) -C .. clean RUN_DIR=$(LAB_DIR) #runs the makefile