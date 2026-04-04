#include <javax/swing/plaf/TextUI.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace plaf {

void TextUI::init$() {
	$ComponentUI::init$();
}

$Rectangle2D* TextUI::modelToView2D($JTextComponent* t, int32_t pos, $Position$Bias* bias) {
	return modelToView(t, pos, bias);
}

int32_t TextUI::viewToModel2D($JTextComponent* t, $Point2D* pt, $Position$BiasArray* biasReturn) {
	int32_t var$0 = $cast(int32_t, $nc(pt)->getX());
	return viewToModel(t, $$new($Point, var$0, $cast(int32_t, pt->getY())), biasReturn);
}

$String* TextUI::getToolTipText($JTextComponent* t, $Point* pt) {
	return nullptr;
}

$String* TextUI::getToolTipText2D($JTextComponent* t, $Point2D* pt) {
	int32_t var$0 = $cast(int32_t, $nc(pt)->getX());
	return getToolTipText(t, $$new($Point, var$0, $cast(int32_t, pt->getY())));
}

TextUI::TextUI() {
}

$Class* TextUI::load$($String* name, bool initialize) {
	$NamedAttribute getToolTipTextmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute getToolTipTextmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getToolTipTextmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute modelToViewmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute modelToViewmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", modelToViewmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute modelToViewmethodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute modelToViewmethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", modelToViewmethodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute viewToModelmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute viewToModelmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", viewToModelmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute viewToModelmethodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute viewToModelmethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", viewToModelmethodAnnotations$$$1$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(TextUI, init$, void)},
		{"damageRange", "(Ljavax/swing/text/JTextComponent;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextUI, damageRange, void, $JTextComponent*, int32_t, int32_t)},
		{"damageRange", "(Ljavax/swing/text/JTextComponent;IILjavax/swing/text/Position$Bias;Ljavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextUI, damageRange, void, $JTextComponent*, int32_t, int32_t, $Position$Bias*, $Position$Bias*)},
		{"getEditorKit", "(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/EditorKit;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextUI, getEditorKit, $EditorKit*, $JTextComponent*)},
		{"getNextVisualPositionFrom", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextUI, getNextVisualPositionFrom, int32_t, $JTextComponent*, int32_t, $Position$Bias*, int32_t, $Position$BiasArray*), "javax.swing.text.BadLocationException"},
		{"getRootView", "(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/View;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextUI, getRootView, $View*, $JTextComponent*)},
		{"getToolTipText", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;)Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(TextUI, getToolTipText, $String*, $JTextComponent*, $Point*), nullptr, nullptr, getToolTipTextmethodAnnotations$$},
		{"getToolTipText2D", "(Ljavax/swing/text/JTextComponent;Ljava/awt/geom/Point2D;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TextUI, getToolTipText2D, $String*, $JTextComponent*, $Point2D*)},
		{"modelToView", "(Ljavax/swing/text/JTextComponent;I)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(TextUI, modelToView, $Rectangle*, $JTextComponent*, int32_t), "javax.swing.text.BadLocationException", nullptr, modelToViewmethodAnnotations$$},
		{"modelToView", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(TextUI, modelToView, $Rectangle*, $JTextComponent*, int32_t, $Position$Bias*), "javax.swing.text.BadLocationException", nullptr, modelToViewmethodAnnotations$$$1},
		{"modelToView2D", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $virtualMethod(TextUI, modelToView2D, $Rectangle2D*, $JTextComponent*, int32_t, $Position$Bias*), "javax.swing.text.BadLocationException"},
		{"viewToModel", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;)I", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(TextUI, viewToModel, int32_t, $JTextComponent*, $Point*), nullptr, nullptr, viewToModelmethodAnnotations$$},
		{"viewToModel", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(TextUI, viewToModel, int32_t, $JTextComponent*, $Point*, $Position$BiasArray*), nullptr, nullptr, viewToModelmethodAnnotations$$$1},
		{"viewToModel2D", "(Ljavax/swing/text/JTextComponent;Ljava/awt/geom/Point2D;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, $virtualMethod(TextUI, viewToModel2D, int32_t, $JTextComponent*, $Point2D*, $Position$BiasArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.TextUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TextUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextUI);
	});
	return class$;
}

$Class* TextUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax