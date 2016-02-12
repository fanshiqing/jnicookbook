RECIPES = recipeNo001 recipeNo002 recipeNo003 recipeNo004 recipeNo005 recipeNo006 recipeNo007 recipeNo008 recipeNo009 recipeNo010 recipeNo011 recipeNo012 recipeNo013 recipeNo014 recipeNo015 recipeNo016 recipeNo017

.PHONY: all

all:
	for RECIPE in ${RECIPES} ; do \
		$(MAKE) -C $${RECIPE} ; \
	done

test:
	for RECIPE in ${RECIPES} ; do \
		$(MAKE) -C $${RECIPE} test ; \
	done

clean:
	for RECIPE in ${RECIPES} ; do \
		$(MAKE) -C $${RECIPE} clean ; \
	done
