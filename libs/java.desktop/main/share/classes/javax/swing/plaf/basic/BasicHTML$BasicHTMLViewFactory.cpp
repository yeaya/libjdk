#include <javax/swing/plaf/basic/BasicHTML$BasicHTMLViewFactory.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/HTMLEditorKit$HTMLFactory.h>
#include <javax/swing/text/html/ImageView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $HTMLEditorKit$HTMLFactory = ::javax::swing::text::html::HTMLEditorKit$HTMLFactory;
using $ImageView = ::javax::swing::text::html::ImageView;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicHTML$BasicHTMLViewFactory::init$() {
	$HTMLEditorKit$HTMLFactory::init$();
}

$View* BasicHTML$BasicHTMLViewFactory::create($Element* elem) {
	$var($View, view, $HTMLEditorKit$HTMLFactory::create(elem));
	if ($instanceOf($ImageView, view)) {
		$cast($ImageView, view)->setLoadsSynchronously(true);
	}
	return view;
}

BasicHTML$BasicHTMLViewFactory::BasicHTML$BasicHTMLViewFactory() {
}

$Class* BasicHTML$BasicHTMLViewFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BasicHTML$BasicHTMLViewFactory, init$, void)},
		{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC, $virtualMethod(BasicHTML$BasicHTMLViewFactory, create, $View*, $Element*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicHTML$BasicHTMLViewFactory", "javax.swing.plaf.basic.BasicHTML", "BasicHTMLViewFactory", $STATIC},
		{"javax.swing.text.html.HTMLEditorKit$HTMLFactory", "javax.swing.text.html.HTMLEditorKit", "HTMLFactory", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicHTML$BasicHTMLViewFactory",
		"javax.swing.text.html.HTMLEditorKit$HTMLFactory",
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
	$loadClass(BasicHTML$BasicHTMLViewFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicHTML$BasicHTMLViewFactory);
	});
	return class$;
}

$Class* BasicHTML$BasicHTMLViewFactory::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax