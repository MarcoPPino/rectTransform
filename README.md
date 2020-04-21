# rectTransform
rectTransform is an OpenFrameworks project that draws an ofRectangle and provides some of the functionalities like the photoshop "free transform"-tool we all know and love.

Creates an ofRectangle as a container for whatever you like and appends smaller ofRectangles as transform handles. 
All handles scale the rect in the direction of their position. Top & Bottom scales the height, Left & Right scales the width. The corner handles scale in all directions.
Press shift while pulling the bottom right to keep the aspect ration while scaling. 
Rect can be moved freely. A small tooltip shows the position while the rect is moved and the width/height while scaling. 

<img width="1136" alt="Bildschirmfoto 2020-04-16 um 13 35 36" src="https://user-images.githubusercontent.com/25278349/79451689-36b18d00-7fe7-11ea-87f5-b7f24eebb2c4.png">

issues: 
- Shift - Aspect ratio keeping doesn't seem to work properly

todo: 
- LESS MESS
- Shift - Aspect ratio keeping on all handles & platforms(?)
- User input for scaling
- convert to propper class or addon

- Restrain from scaling below zero. ofRectangle can have -width & -height ✓ <br/>
  Done. Solution: It does scale below zero but on mouseReleased the rect is substituded with a standardized version of its own



