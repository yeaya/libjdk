#include <javax/swing/plaf/basic/BasicHTML$BasicEditorKit.h>
#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/io/StringReader.h>
#include <java/net/URL.h>
#include <javax/swing/plaf/basic/BasicHTML$BasicDocument.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicHTML$BasicDocument = ::javax::swing::plaf::basic::BasicHTML$BasicDocument;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $Document = ::javax::swing::text::Document;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$StyleSheet* BasicHTML$BasicEditorKit::defaultStyles = nullptr;

void BasicHTML$BasicEditorKit::init$() {
	$HTMLEditorKit::init$();
}

$StyleSheet* BasicHTML$BasicEditorKit::getStyleSheet() {
	$useLocalObjectStack();
	if (BasicHTML$BasicEditorKit::defaultStyles == nullptr) {
		$assignStatic(BasicHTML$BasicEditorKit::defaultStyles, $new($StyleSheet));
		$var($StringReader, r, $new($StringReader, "p { margin-top: 0; margin-bottom: 0; margin-left: 0; margin-right: 0 }body { margin-top: 0; margin-bottom: 0; margin-left: 0; margin-right: 0 }"_s));
		try {
			BasicHTML$BasicEditorKit::defaultStyles->loadRules(r, nullptr);
		} catch ($Throwable& e) {
		}
		r->close();
		$nc(BasicHTML$BasicEditorKit::defaultStyles)->addStyleSheet($($HTMLEditorKit::getStyleSheet()));
	}
	return BasicHTML$BasicEditorKit::defaultStyles;
}

$Document* BasicHTML$BasicEditorKit::createDefaultDocument($Font* defaultFont, $Color* foreground) {
	$useLocalObjectStack();
	$var($StyleSheet, styles, getStyleSheet());
	$var($StyleSheet, ss, $new($StyleSheet));
	ss->addStyleSheet(styles);
	$var($BasicHTML$BasicDocument, doc, $new($BasicHTML$BasicDocument, ss, defaultFont, foreground));
	doc->setAsynchronousLoadPriority($Integer::MAX_VALUE);
	doc->setPreservesUnknownTags(false);
	return $cast($AbstractDocument, doc);
}

$ViewFactory* BasicHTML$BasicEditorKit::getViewFactory() {
	$init($BasicHTML);
	return $BasicHTML::basicHTMLViewFactory;
}

BasicHTML$BasicEditorKit::BasicHTML$BasicEditorKit() {
}

$Class* BasicHTML$BasicEditorKit::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultStyles", "Ljavax/swing/text/html/StyleSheet;", nullptr, $PRIVATE | $STATIC, $staticField(BasicHTML$BasicEditorKit, defaultStyles)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BasicHTML$BasicEditorKit, init$, void)},
		{"createDefaultDocument", "(Ljava/awt/Font;Ljava/awt/Color;)Ljavax/swing/text/Document;", nullptr, $PUBLIC, $virtualMethod(BasicHTML$BasicEditorKit, createDefaultDocument, $Document*, $Font*, $Color*)},
		{"getStyleSheet", "()Ljavax/swing/text/html/StyleSheet;", nullptr, $PUBLIC, $virtualMethod(BasicHTML$BasicEditorKit, getStyleSheet, $StyleSheet*)},
		{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC, $virtualMethod(BasicHTML$BasicEditorKit, getViewFactory, $ViewFactory*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicHTML$BasicEditorKit", "javax.swing.plaf.basic.BasicHTML", "BasicEditorKit", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicHTML$BasicEditorKit",
		"javax.swing.text.html.HTMLEditorKit",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicHTML"
	};
	$loadClass(BasicHTML$BasicEditorKit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicHTML$BasicEditorKit));
	});
	return class$;
}

$Class* BasicHTML$BasicEditorKit::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax