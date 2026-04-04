#include <javax/swing/text/StyledEditorKit.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/Action.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledEditorKit$1.h>
#include <javax/swing/text/StyledEditorKit$AlignmentAction.h>
#include <javax/swing/text/StyledEditorKit$AttributeTracker.h>
#include <javax/swing/text/StyledEditorKit$BoldAction.h>
#include <javax/swing/text/StyledEditorKit$FontFamilyAction.h>
#include <javax/swing/text/StyledEditorKit$FontSizeAction.h>
#include <javax/swing/text/StyledEditorKit$ItalicAction.h>
#include <javax/swing/text/StyledEditorKit$StyledInsertBreakAction.h>
#include <javax/swing/text/StyledEditorKit$StyledViewFactory.h>
#include <javax/swing/text/StyledEditorKit$UnderlineAction.h>
#include <javax/swing/text/TextAction.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef ALIGN_CENTER
#undef ALIGN_LEFT
#undef ALIGN_RIGHT

using $ActionArray = $Array<::javax::swing::Action>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $Caret = ::javax::swing::text::Caret;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledEditorKit$1 = ::javax::swing::text::StyledEditorKit$1;
using $StyledEditorKit$AlignmentAction = ::javax::swing::text::StyledEditorKit$AlignmentAction;
using $StyledEditorKit$AttributeTracker = ::javax::swing::text::StyledEditorKit$AttributeTracker;
using $StyledEditorKit$BoldAction = ::javax::swing::text::StyledEditorKit$BoldAction;
using $StyledEditorKit$FontFamilyAction = ::javax::swing::text::StyledEditorKit$FontFamilyAction;
using $StyledEditorKit$FontSizeAction = ::javax::swing::text::StyledEditorKit$FontSizeAction;
using $StyledEditorKit$ItalicAction = ::javax::swing::text::StyledEditorKit$ItalicAction;
using $StyledEditorKit$StyledInsertBreakAction = ::javax::swing::text::StyledEditorKit$StyledInsertBreakAction;
using $StyledEditorKit$StyledViewFactory = ::javax::swing::text::StyledEditorKit$StyledViewFactory;
using $StyledEditorKit$UnderlineAction = ::javax::swing::text::StyledEditorKit$UnderlineAction;
using $TextAction = ::javax::swing::text::TextAction;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace text {

$ViewFactory* StyledEditorKit::defaultFactory = nullptr;
$ActionArray* StyledEditorKit::defaultActions = nullptr;

void StyledEditorKit::init$() {
	$DefaultEditorKit::init$();
	createInputAttributeUpdated();
	createInputAttributes();
}

$MutableAttributeSet* StyledEditorKit::getInputAttributes() {
	return this->inputAttributes;
}

$Element* StyledEditorKit::getCharacterAttributeRun() {
	return this->currentRun;
}

$ActionArray* StyledEditorKit::getActions() {
	return $TextAction::augmentList($($DefaultEditorKit::getActions()), StyledEditorKit::defaultActions);
}

$Document* StyledEditorKit::createDefaultDocument() {
	return $cast($AbstractDocument, $new($DefaultStyledDocument));
}

void StyledEditorKit::install($JEditorPane* c) {
	$nc(c)->addCaretListener(this->inputAttributeUpdater);
	c->addPropertyChangeListener(this->inputAttributeUpdater);
	$var($Caret, caret, c->getCaret());
	if (caret != nullptr) {
		int32_t var$0 = caret->getDot();
		$nc(this->inputAttributeUpdater)->updateInputAttributes(var$0, caret->getMark(), c);
	}
}

void StyledEditorKit::deinstall($JEditorPane* c) {
	$nc(c)->removeCaretListener(this->inputAttributeUpdater);
	c->removePropertyChangeListener(this->inputAttributeUpdater);
	$set(this, currentRun, nullptr);
	$set(this, currentParagraph, nullptr);
}

$ViewFactory* StyledEditorKit::getViewFactory() {
	return StyledEditorKit::defaultFactory;
}

$Object* StyledEditorKit::clone() {
	$var(StyledEditorKit, o, $cast(StyledEditorKit, $DefaultEditorKit::clone()));
	$set($nc(o), currentRun, $set($nc(o), currentParagraph, nullptr));
	o->createInputAttributeUpdated();
	o->createInputAttributes();
	return $of(o);
}

void StyledEditorKit::createInputAttributes() {
	$set(this, inputAttributes, $new($StyledEditorKit$1, this));
}

void StyledEditorKit::createInputAttributeUpdated() {
	$set(this, inputAttributeUpdater, $new($StyledEditorKit$AttributeTracker, this));
}

void StyledEditorKit::createInputAttributes($Element* element, $MutableAttributeSet* set) {
	$useLocalObjectStack();
	bool var$1 = $$nc($nc(element)->getAttributes())->getAttributeCount() > 0;
	if (!var$1) {
		int32_t var$2 = element->getEndOffset();
		var$1 = var$2 - element->getStartOffset() > 1;
	}
	bool var$0 = var$1;
	if (!var$0) {
		int32_t var$3 = element->getEndOffset();
		var$0 = var$3 < $$nc(element->getDocument())->getLength();
	}
	if (var$0) {
		$nc(set)->removeAttributes(set);
		set->addAttributes($(element->getAttributes()));
		$init($StyleConstants);
		set->removeAttribute($StyleConstants::ComponentAttribute);
		set->removeAttribute($StyleConstants::IconAttribute);
		$init($AbstractDocument);
		set->removeAttribute($AbstractDocument::ElementNameAttribute);
		set->removeAttribute($StyleConstants::ComposedTextAttribute);
	}
}

void StyledEditorKit::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(StyledEditorKit::defaultFactory, $new($StyledEditorKit$StyledViewFactory));
	$assignStatic(StyledEditorKit::defaultActions, $new($ActionArray, {
		$$new($StyledEditorKit$FontFamilyAction, "font-family-SansSerif"_s, "SansSerif"_s),
		$$new($StyledEditorKit$FontFamilyAction, "font-family-Monospaced"_s, "Monospaced"_s),
		$$new($StyledEditorKit$FontFamilyAction, "font-family-Serif"_s, "Serif"_s),
		$$new($StyledEditorKit$FontSizeAction, "font-size-8"_s, 8),
		$$new($StyledEditorKit$FontSizeAction, "font-size-10"_s, 10),
		$$new($StyledEditorKit$FontSizeAction, "font-size-12"_s, 12),
		$$new($StyledEditorKit$FontSizeAction, "font-size-14"_s, 14),
		$$new($StyledEditorKit$FontSizeAction, "font-size-16"_s, 16),
		$$new($StyledEditorKit$FontSizeAction, "font-size-18"_s, 18),
		$$new($StyledEditorKit$FontSizeAction, "font-size-24"_s, 24),
		$$new($StyledEditorKit$FontSizeAction, "font-size-36"_s, 36),
		$$new($StyledEditorKit$FontSizeAction, "font-size-48"_s, 48),
		$$new($StyledEditorKit$AlignmentAction, "left-justify"_s, $StyleConstants::ALIGN_LEFT),
		$$new($StyledEditorKit$AlignmentAction, "center-justify"_s, $StyleConstants::ALIGN_CENTER),
		$$new($StyledEditorKit$AlignmentAction, "right-justify"_s, $StyleConstants::ALIGN_RIGHT),
		$$new($StyledEditorKit$BoldAction),
		$$new($StyledEditorKit$ItalicAction),
		$$new($StyledEditorKit$StyledInsertBreakAction),
		$$new($StyledEditorKit$UnderlineAction)
	}));
}

StyledEditorKit::StyledEditorKit() {
}

$Class* StyledEditorKit::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultFactory", "Ljavax/swing/text/ViewFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StyledEditorKit, defaultFactory)},
		{"currentRun", "Ljavax/swing/text/Element;", nullptr, 0, $field(StyledEditorKit, currentRun)},
		{"currentParagraph", "Ljavax/swing/text/Element;", nullptr, 0, $field(StyledEditorKit, currentParagraph)},
		{"inputAttributes", "Ljavax/swing/text/MutableAttributeSet;", nullptr, 0, $field(StyledEditorKit, inputAttributes)},
		{"inputAttributeUpdater", "Ljavax/swing/text/StyledEditorKit$AttributeTracker;", nullptr, $PRIVATE, $field(StyledEditorKit, inputAttributeUpdater)},
		{"defaultActions", "[Ljavax/swing/Action;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StyledEditorKit, defaultActions)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StyledEditorKit, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit, clone, $Object*)},
		{"createDefaultDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit, createDefaultDocument, $Document*)},
		{"createInputAttributeUpdated", "()V", nullptr, $PRIVATE, $method(StyledEditorKit, createInputAttributeUpdated, void)},
		{"createInputAttributes", "()V", nullptr, $PRIVATE, $method(StyledEditorKit, createInputAttributes, void)},
		{"createInputAttributes", "(Ljavax/swing/text/Element;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PROTECTED, $virtualMethod(StyledEditorKit, createInputAttributes, void, $Element*, $MutableAttributeSet*)},
		{"deinstall", "(Ljavax/swing/JEditorPane;)V", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit, deinstall, void, $JEditorPane*)},
		{"getActions", "()[Ljavax/swing/Action;", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit, getActions, $ActionArray*)},
		{"getCharacterAttributeRun", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit, getCharacterAttributeRun, $Element*)},
		{"getInputAttributes", "()Ljavax/swing/text/MutableAttributeSet;", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit, getInputAttributes, $MutableAttributeSet*)},
		{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit, getViewFactory, $ViewFactory*)},
		{"install", "(Ljavax/swing/JEditorPane;)V", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit, install, void, $JEditorPane*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.StyledEditorKit$StyledInsertBreakAction", "javax.swing.text.StyledEditorKit", "StyledInsertBreakAction", $STATIC},
		{"javax.swing.text.StyledEditorKit$UnderlineAction", "javax.swing.text.StyledEditorKit", "UnderlineAction", $PUBLIC | $STATIC},
		{"javax.swing.text.StyledEditorKit$ItalicAction", "javax.swing.text.StyledEditorKit", "ItalicAction", $PUBLIC | $STATIC},
		{"javax.swing.text.StyledEditorKit$BoldAction", "javax.swing.text.StyledEditorKit", "BoldAction", $PUBLIC | $STATIC},
		{"javax.swing.text.StyledEditorKit$AlignmentAction", "javax.swing.text.StyledEditorKit", "AlignmentAction", $PUBLIC | $STATIC},
		{"javax.swing.text.StyledEditorKit$ForegroundAction", "javax.swing.text.StyledEditorKit", "ForegroundAction", $PUBLIC | $STATIC},
		{"javax.swing.text.StyledEditorKit$FontSizeAction", "javax.swing.text.StyledEditorKit", "FontSizeAction", $PUBLIC | $STATIC},
		{"javax.swing.text.StyledEditorKit$FontFamilyAction", "javax.swing.text.StyledEditorKit", "FontFamilyAction", $PUBLIC | $STATIC},
		{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
		{"javax.swing.text.StyledEditorKit$StyledViewFactory", "javax.swing.text.StyledEditorKit", "StyledViewFactory", $STATIC},
		{"javax.swing.text.StyledEditorKit$AttributeTracker", "javax.swing.text.StyledEditorKit", "AttributeTracker", 0},
		{"javax.swing.text.StyledEditorKit$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.StyledEditorKit",
		"javax.swing.text.DefaultEditorKit",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.text.StyledEditorKit$StyledInsertBreakAction,javax.swing.text.StyledEditorKit$UnderlineAction,javax.swing.text.StyledEditorKit$ItalicAction,javax.swing.text.StyledEditorKit$BoldAction,javax.swing.text.StyledEditorKit$AlignmentAction,javax.swing.text.StyledEditorKit$ForegroundAction,javax.swing.text.StyledEditorKit$FontSizeAction,javax.swing.text.StyledEditorKit$FontFamilyAction,javax.swing.text.StyledEditorKit$StyledTextAction,javax.swing.text.StyledEditorKit$StyledViewFactory,javax.swing.text.StyledEditorKit$AttributeTracker,javax.swing.text.StyledEditorKit$1"
	};
	$loadClass(StyledEditorKit, name, initialize, &classInfo$$, StyledEditorKit::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(StyledEditorKit));
	});
	return class$;
}

$Class* StyledEditorKit::class$ = nullptr;

		} // text
	} // swing
} // javax