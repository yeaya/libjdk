#include <javax/swing/plaf/basic/BasicHTML$BasicDocument.h>
#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicHTML$BasicDocument::init$($StyleSheet* s, $Font* defaultFont, $Color* foreground) {
	$HTMLDocument::init$(s);
	setPreservesUnknownTags(false);
	setFontAndColor(defaultFont, foreground);
}

void BasicHTML$BasicDocument::setFontAndColor($Font* font, $Color* fg) {
	$useLocalObjectStack();
	$$nc(getStyleSheet())->addRule($($SwingUtilities2::displayPropertiesToCSS(font, fg)));
}

BasicHTML$BasicDocument::BasicHTML$BasicDocument() {
}

$Class* BasicHTML$BasicDocument::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/StyleSheet;Ljava/awt/Font;Ljava/awt/Color;)V", nullptr, 0, $method(BasicHTML$BasicDocument, init$, void, $StyleSheet*, $Font*, $Color*)},
		{"setFontAndColor", "(Ljava/awt/Font;Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(BasicHTML$BasicDocument, setFontAndColor, void, $Font*, $Color*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicHTML$BasicDocument", "javax.swing.plaf.basic.BasicHTML", "BasicDocument", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicHTML$BasicDocument",
		"javax.swing.text.html.HTMLDocument",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicHTML"
	};
	$loadClass(BasicHTML$BasicDocument, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicHTML$BasicDocument));
	});
	return class$;
}

$Class* BasicHTML$BasicDocument::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax