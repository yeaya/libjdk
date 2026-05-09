#include <javax/swing/JEditorPane$PlainEditorKit.h>
#include <javax/swing/JEditorPane$PlainEditorKit$PlainParagraph.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/WrappedPlainView.h>
#include <jcpp.h>

#undef TRUE
#undef Y_AXIS

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane$PlainEditorKit$PlainParagraph = ::javax::swing::JEditorPane$PlainEditorKit$PlainParagraph;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $BoxView = ::javax::swing::text::BoxView;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $WrappedPlainView = ::javax::swing::text::WrappedPlainView;

namespace javax {
	namespace swing {

$Object* JEditorPane$PlainEditorKit::clone() {
	return this->$DefaultEditorKit::clone();
}

int32_t JEditorPane$PlainEditorKit::hashCode() {
	return this->$DefaultEditorKit::hashCode();
}

bool JEditorPane$PlainEditorKit::equals(Object$* arg0) {
	return this->$DefaultEditorKit::equals(arg0);
}

$String* JEditorPane$PlainEditorKit::toString() {
	return this->$DefaultEditorKit::toString();
}

void JEditorPane$PlainEditorKit::finalize() {
	this->$DefaultEditorKit::finalize();
}

void JEditorPane$PlainEditorKit::init$() {
	$DefaultEditorKit::init$();
}

$ViewFactory* JEditorPane$PlainEditorKit::getViewFactory() {
	return this;
}

$View* JEditorPane$PlainEditorKit::create($Element* elem) {
	$useLocalObjectStack();
	$var($Document, doc, $nc(elem)->getDocument());
	$var($Object, i18nFlag, $nc(doc)->getProperty("i18n"_s));
	if ((i18nFlag != nullptr) && i18nFlag->equals($Boolean::TRUE)) {
		return createI18N(elem);
	} else {
		return $new($WrappedPlainView, elem);
	}
}

$View* JEditorPane$PlainEditorKit::createI18N($Element* elem) {
	$var($String, kind, $nc(elem)->getName());
	if (kind != nullptr) {
		$init($AbstractDocument);
		if (kind->equals($AbstractDocument::ContentElementName)) {
			return $new($JEditorPane$PlainEditorKit$PlainParagraph, elem);
		} else if (kind->equals($AbstractDocument::ParagraphElementName)) {
			return $new($BoxView, elem, $View::Y_AXIS);
		}
	}
	return nullptr;
}

JEditorPane$PlainEditorKit::JEditorPane$PlainEditorKit() {
}

$Class* JEditorPane$PlainEditorKit::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(JEditorPane$PlainEditorKit, init$, void)},
		{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC, $virtualMethod(JEditorPane$PlainEditorKit, create, $View*, $Element*)},
		{"createI18N", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0, $virtualMethod(JEditorPane$PlainEditorKit, createI18N, $View*, $Element*)},
		{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC, $virtualMethod(JEditorPane$PlainEditorKit, getViewFactory, $ViewFactory*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JEditorPane$PlainEditorKit", "javax.swing.JEditorPane", "PlainEditorKit", $STATIC},
		{"javax.swing.JEditorPane$PlainEditorKit$PlainParagraph", "javax.swing.JEditorPane$PlainEditorKit", "PlainParagraph", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JEditorPane$PlainEditorKit",
		"javax.swing.text.DefaultEditorKit",
		"javax.swing.text.ViewFactory",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JEditorPane"
	};
	$loadClass(JEditorPane$PlainEditorKit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JEditorPane$PlainEditorKit));
	});
	return class$;
}

$Class* JEditorPane$PlainEditorKit::class$ = nullptr;

	} // swing
} // javax