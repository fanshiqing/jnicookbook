RECIPES = recipeNo001

.PHONY: all

all:
	$(MAKE) -C $(RECIPES)

test:
	$(MAKE) -C $(RECIPES) test

clean:
	$(MAKE) -C $(RECIPES) clean
