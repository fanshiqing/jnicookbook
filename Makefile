RECIPES = recipeNo001

.PHONY: all

all:
	$(MAKE) -C $(RECIPES)

clean:
	$(MAKE) -C $(RECIPES) clean
