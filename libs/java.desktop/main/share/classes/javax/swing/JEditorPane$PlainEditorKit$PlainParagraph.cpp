#include <javax/swing/JEditorPane$PlainEditorKit$PlainParagraph.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <javax/swing/JEditorPane$PlainEditorKit$PlainParagraph$LogicalView.h>
#include <javax/swing/JEditorPane$PlainEditorKit.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/ParagraphView.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef ALIGN_LEFT
#undef ALIGN_RIGHT
#undef MAX_VALUE

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane$PlainEditorKit$PlainParagraph$LogicalView = ::javax::swing::JEditorPane$PlainEditorKit$PlainParagraph$LogicalView;
using $JTextArea = ::javax::swing::JTextArea;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $Element = ::javax::swing::text::Element;
using $ParagraphView = ::javax::swing::text::ParagraphView;
using $StyleConstants = ::javax::swing::text::StyleConstants;

namespace javax {
	namespace swing {

void JEditorPane$PlainEditorKit$PlainParagraph::init$($Element* elem) {
	$ParagraphView::init$(elem);
	$set(this, layoutPool, $new($JEditorPane$PlainEditorKit$PlainParagraph$LogicalView, elem));
	this->layoutPool->setParent(this);
}

void JEditorPane$PlainEditorKit$PlainParagraph::setPropertiesFromAttributes() {
	$useLocalObjectStack();
	$var($Component, c, getContainer());
	if ((c != nullptr) && (!$$nc(c->getComponentOrientation())->isLeftToRight())) {
		setJustification($StyleConstants::ALIGN_RIGHT);
	} else {
		setJustification($StyleConstants::ALIGN_LEFT);
	}
}

int32_t JEditorPane$PlainEditorKit$PlainParagraph::getFlowSpan(int32_t index) {
	$useLocalObjectStack();
	$var($Component, c, getContainer());
	if ($instanceOf($JTextArea, c)) {
		$var($JTextArea, area, $cast($JTextArea, c));
		if (!area->getLineWrap()) {
			return $Integer::MAX_VALUE;
		}
	}
	return $ParagraphView::getFlowSpan(index);
}

$SizeRequirements* JEditorPane$PlainEditorKit$PlainParagraph::calculateMinorAxisRequirements(int32_t axis, $SizeRequirements* r) {
	$useLocalObjectStack();
	$var($SizeRequirements, req, $ParagraphView::calculateMinorAxisRequirements(axis, r));
	$var($Component, c, getContainer());
	if ($instanceOf($JTextArea, c)) {
		$var($JTextArea, area, $cast($JTextArea, c));
		if (!area->getLineWrap()) {
			$nc(req)->minimum = $nc(req)->preferred;
		}
	}
	return req;
}

JEditorPane$PlainEditorKit$PlainParagraph::JEditorPane$PlainEditorKit$PlainParagraph() {
}

$Class* JEditorPane$PlainEditorKit$PlainParagraph::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, 0, $method(JEditorPane$PlainEditorKit$PlainParagraph, init$, void, $Element*)},
		{"calculateMinorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED, $virtualMethod(JEditorPane$PlainEditorKit$PlainParagraph, calculateMinorAxisRequirements, $SizeRequirements*, int32_t, $SizeRequirements*)},
		{"getFlowSpan", "(I)I", nullptr, $PUBLIC, $virtualMethod(JEditorPane$PlainEditorKit$PlainParagraph, getFlowSpan, int32_t, int32_t)},
		{"setPropertiesFromAttributes", "()V", nullptr, $PROTECTED, $virtualMethod(JEditorPane$PlainEditorKit$PlainParagraph, setPropertiesFromAttributes, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JEditorPane$PlainEditorKit", "javax.swing.JEditorPane", "PlainEditorKit", $STATIC},
		{"javax.swing.JEditorPane$PlainEditorKit$PlainParagraph", "javax.swing.JEditorPane$PlainEditorKit", "PlainParagraph", $STATIC},
		{"javax.swing.JEditorPane$PlainEditorKit$PlainParagraph$LogicalView", "javax.swing.JEditorPane$PlainEditorKit$PlainParagraph", "LogicalView", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JEditorPane$PlainEditorKit$PlainParagraph",
		"javax.swing.text.ParagraphView",
		nullptr,
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
	$loadClass(JEditorPane$PlainEditorKit$PlainParagraph, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JEditorPane$PlainEditorKit$PlainParagraph));
	});
	return class$;
}

$Class* JEditorPane$PlainEditorKit$PlainParagraph::class$ = nullptr;

	} // swing
} // javax