#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI$1.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI$I18nFieldView.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FieldView.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef CENTER_OFFSET
#undef TRUE
#undef Y_AXIS

using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicTextFieldUI$1 = ::javax::swing::plaf::basic::BasicTextFieldUI$1;
using $BasicTextFieldUI$I18nFieldView = ::javax::swing::plaf::basic::BasicTextFieldUI$I18nFieldView;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $FieldView = ::javax::swing::text::FieldView;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$ComponentUI* BasicTextFieldUI::createUI($JComponent* c) {
	$init(BasicTextFieldUI);
	return $new(BasicTextFieldUI);
}

void BasicTextFieldUI::init$() {
	$BasicTextUI::init$();
}

$String* BasicTextFieldUI::getPropertyPrefix() {
	return "TextField"_s;
}

$View* BasicTextFieldUI::create($Element* elem) {
	$useLocalObjectStack();
	$var($Document, doc, $nc(elem)->getDocument());
	$var($Object, i18nFlag, $nc(doc)->getProperty("i18n"_s));
	if ($nc($Boolean::TRUE)->equals(i18nFlag)) {
		$var($String, kind, elem->getName());
		if (kind != nullptr) {
			$init($AbstractDocument);
			if (kind->equals($AbstractDocument::ContentElementName)) {
				return $new($BasicTextFieldUI$1, this, elem);
			} else if (kind->equals($AbstractDocument::ParagraphElementName)) {
				return $new($BasicTextFieldUI$I18nFieldView, elem);
			}
		}
	}
	return $new($FieldView, elem);
}

int32_t BasicTextFieldUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalObjectStack();
	$BasicTextUI::getBaseline(c, width, height);
	$var($View, rootView, getRootView($cast($JTextComponent, c)));
	if ($nc(rootView)->getViewCount() > 0) {
		$var($Insets, insets, $nc(c)->getInsets());
		height = height - $nc(insets)->top - $nc(insets)->bottom;
		if (height > 0) {
			int32_t baseline = insets->top;
			$var($View, fieldView, rootView->getView(0));
			int32_t vspan = $cast(int32_t, $nc(fieldView)->getPreferredSpan($View::Y_AXIS));
			if (height != vspan) {
				int32_t slop = height - vspan;
				baseline += slop / 2;
			}
			if ($instanceOf($BasicTextFieldUI$I18nFieldView, fieldView)) {
				int32_t fieldBaseline = $BasicHTML::getBaseline(fieldView, width - insets->left - insets->right, height);
				if (fieldBaseline < 0) {
					return -1;
				}
				baseline += fieldBaseline;
			} else {
				$var($FontMetrics, fm, c->getFontMetrics($(c->getFont())));
				baseline += $nc(fm)->getAscent();
			}
			return baseline;
		}
	}
	return -1;
}

$Component$BaselineResizeBehavior* BasicTextFieldUI::getBaselineResizeBehavior($JComponent* c) {
	$BasicTextUI::getBaselineResizeBehavior(c);
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::CENTER_OFFSET;
}

BasicTextFieldUI::BasicTextFieldUI() {
}

$Class* BasicTextFieldUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicTextFieldUI, init$, void)},
		{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC, $virtualMethod(BasicTextFieldUI, create, $View*, $Element*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicTextFieldUI, createUI, $ComponentUI*, $JComponent*)},
		{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC, $virtualMethod(BasicTextFieldUI, getBaseline, int32_t, $JComponent*, int32_t, int32_t)},
		{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC, $virtualMethod(BasicTextFieldUI, getBaselineResizeBehavior, $Component$BaselineResizeBehavior*, $JComponent*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(BasicTextFieldUI, getPropertyPrefix, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTextFieldUI$I18nFieldView", "javax.swing.plaf.basic.BasicTextFieldUI", "I18nFieldView", $STATIC},
		{"javax.swing.plaf.basic.BasicTextFieldUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTextFieldUI",
		"javax.swing.plaf.basic.BasicTextUI",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicTextFieldUI$I18nFieldView,javax.swing.plaf.basic.BasicTextFieldUI$1"
	};
	$loadClass(BasicTextFieldUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTextFieldUI));
	});
	return class$;
}

$Class* BasicTextFieldUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax