#include <MyFrame.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/WindowConstants.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE
#undef TYPE_INT_ARGB

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $WindowConstants = ::javax::swing::WindowConstants;

void MyFrame::init$() {
	$useLocalObjectStack();
	$JFrame::init$();
	$set(this, content, "A\nB\nC\nD\nE\nF\nG\nH\nI\nJ\nK\nL\nM\nN\nO"_s);
	$var($JEditorPane, editpane, $new($JEditorPane));
	editpane->setEditable(false);
	editpane->setText(this->content);
	editpane->setCaretPosition(0);
	$var($JScrollPane, scrollpane, $new($JScrollPane, editpane));
	add(scrollpane);
	setDefaultCloseOperation($WindowConstants::DISPOSE_ON_CLOSE);
	setSize($$new($Dimension, 200, 200));
	$set(this, bi, $new($BufferedImage, 200, 200, $BufferedImage::TYPE_INT_ARGB));
	setResizable(false);
	setVisible(true);
}

$Color* MyFrame::getPixelColor(int32_t x, int32_t y) {
	paintFrameToBufferedImage(this);
	int32_t pixel = $nc(this->bi)->getRGB(x, y);
	int32_t alpha = (pixel >> 24) & 0xff;
	int32_t red = (pixel >> 16) & 0xff;
	int32_t green = (pixel >> 8) & 0xff;
	int32_t blue = (pixel) & 0xff;
	$var($Color, pixelColor, $new($Color, red, green, blue, alpha));
	return pixelColor;
}

void MyFrame::paintFrameToBufferedImage($Component* component) {
	$nc(component)->paint($($nc(this->bi)->getGraphics()));
}

MyFrame::MyFrame() {
}

$Class* MyFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bi", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $field(MyFrame, bi)},
		{"content", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MyFrame, content)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MyFrame, init$, void)},
		{"getPixelColor", "(II)Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(MyFrame, getPixelColor, $Color*, int32_t, int32_t)},
		{"paintFrameToBufferedImage", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(MyFrame, paintFrameToBufferedImage, void, $Component*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MyFrame",
		"javax.swing.JFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MyFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MyFrame));
	});
	return class$;
}

$Class* MyFrame::class$ = nullptr;