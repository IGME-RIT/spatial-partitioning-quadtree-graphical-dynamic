Documentation & Tutorial Author: Sanketh Bhat, 2019

This tutorial was designed for Visual Studio 2017 / 2019
If the solution does not compile, retarget the solution
to a different version of the Windows SDK. If you do not
have any version of the Windows SDK, it can be installed
from the Visual Studio Installer Tool

Pre-requisites: Graphical Quadtree

Graphical Dynamic Quadtree

>The base quadtree implementation is identical to the previous example. The biggest difference is that we clear the quadtree at the beginning of very frame
>and re-insert all our points. If you deal with static and non-static entities, a more optimized method would be to only re-insert the moving entities and not rebuild
>the whole tree every frame. As this is dynamic, we also have a second check if the point is overlapping on the parent quad if true we add it to the parent quad's entity 
>collection. 






