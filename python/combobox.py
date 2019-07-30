# Name: Muazam Kamal
# File: combobox.py
# Purpose: Implementation example of the Tkinter combobox in Python 2.7

import Tkinter as tk
import ttk # Python 2 requires ttk to be imported as its own module

# Creating base app/canvas
app = tk.Tk()
app.geometry("400x150")

# Label

labelTop = tk.Label(app, text = "Enter user..")
labelTop.grid(column = 0, row = 0)

# Combobox

# Options for the combobox
option = [
    "Shafiq",
    "Muazam"
]

# Creating combobox with the option provided above
combo = ttk.Combobox(app, values = option)
combo.grid(column = 0, row = 1)
combo.current(0) # Set the default option to index 0

# To be honest, having a function in the middle/between lines of code like this
# doesn't look nice. I'm not even sure if this is a good idea or not, but it works.
#
# popup function need to be declared before button for "Enter" (line 47) is created.
# But it also need to be AFTER combobox so that "combo.get()" will be available for it to use
# to get the current selected option.
# Not elegent, I don't really like this, but it's a prove of concept for how Combobox works.
def popup():
    pop = tk.Toplevel()
    pop.wm_title("Welcome")
    pop.geometry("200x80")

    message = "Hi \"" + combo.get() + "\"!"

    label = tk.Label(pop, text = message)
    label.grid(column = 0, row = 0)

    b = ttk.Button(pop, text="Done", command = pop.destroy)
    b.grid(column = 0, row = 1)

# Button
button = tk.Button(app, text = "Enter", command = popup)
button.grid(column = 1, row = 1)

# Quit
button = tk.Button(app, text = "Quit", command = app.destroy)
button.grid(column = 0, row = 2)

app.mainloop()