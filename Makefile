pos.png phase.png : LC_graph.py tray.txt
			python LC_graph.py
tray.txt : gravity
			./gravity > tray.txt

gravity:
			c++ LC_gravity.cpp -o gravity
