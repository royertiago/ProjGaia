gaiadir := $(dir $(lastword $(MAKEFILE_LIST)))

ALL_CXXFLAGS += -isystem $(gaiadir)include

gaiasrc := $(shell find $(gaiadir) -name "*.cpp")
src += $(gaiasrc)
dep += $(gaiasrc:.cpp=.dep.mk)
obj += $(gaiasrc:.cpp=.o)

mostlyclean: gaia-mostlyclean

gaia-mostlyclean:
	find $(gaiadir) -name "*.o" -exec rm {} +
