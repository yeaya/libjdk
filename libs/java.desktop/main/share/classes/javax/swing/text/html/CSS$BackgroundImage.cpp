#include <javax/swing/text/html/CSS$BackgroundImage.h>
#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/net/URL.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $ImageIcon = ::javax::swing::ImageIcon;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void CSS$BackgroundImage::init$() {
	$CSS$CssValue::init$();
}

$Object* CSS$BackgroundImage::parseCssValue($String* value) {
	$var(CSS$BackgroundImage, retValue, $new(CSS$BackgroundImage));
	$set(retValue, svalue, value);
	return retValue;
}

$Object* CSS$BackgroundImage::parseHtmlValue($String* value) {
	return parseCssValue(value);
}

$ImageIcon* CSS$BackgroundImage::getImage($URL* base) {
	$useLocalObjectStack();
	if (!this->loadedImage) {
		$synchronized(this) {
			if (!this->loadedImage) {
				$var($URL, url, $CSS::getURL(base, this->svalue));
				this->loadedImage = true;
				if (url != nullptr) {
					$set(this, image, $new($ImageIcon));
					$var($Image, tmpImg, $$nc($Toolkit::getDefaultToolkit())->createImage(url));
					if (tmpImg != nullptr) {
						$nc(this->image)->setImage(tmpImg);
					}
				}
			}
		}
	}
	return this->image;
}

CSS$BackgroundImage::CSS$BackgroundImage() {
}

$Class* CSS$BackgroundImage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"loadedImage", "Z", nullptr, $PRIVATE, $field(CSS$BackgroundImage, loadedImage)},
		{"image", "Ljavax/swing/ImageIcon;", nullptr, $PRIVATE, $field(CSS$BackgroundImage, image)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CSS$BackgroundImage, init$, void)},
		{"getImage", "(Ljava/net/URL;)Ljavax/swing/ImageIcon;", nullptr, 0, $virtualMethod(CSS$BackgroundImage, getImage, $ImageIcon*, $URL*)},
		{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$BackgroundImage, parseCssValue, $Object*, $String*)},
		{"parseHtmlValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$BackgroundImage, parseHtmlValue, $Object*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSS$BackgroundImage", "javax.swing.text.html.CSS", "BackgroundImage", $STATIC},
		{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CSS$BackgroundImage",
		"javax.swing.text.html.CSS$CssValue",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.CSS"
	};
	$loadClass(CSS$BackgroundImage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSS$BackgroundImage);
	});
	return class$;
}

$Class* CSS$BackgroundImage::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax