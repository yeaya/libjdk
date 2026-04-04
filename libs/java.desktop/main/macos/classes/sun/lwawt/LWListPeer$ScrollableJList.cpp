#include <sun/lwawt/LWListPeer$ScrollableJList.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/List.h>
#include <java/awt/event/ItemEvent.h>
#include <java/util/Arrays.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JList.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <sun/lwawt/LWListPeer$ScrollableJList$1.h>
#include <sun/lwawt/LWListPeer$ScrollableJList$JListDelegate.h>
#include <sun/lwawt/LWListPeer.h>
#include <jcpp.h>

#undef DESELECTED
#undef ITEM_STATE_CHANGED
#undef SELECTED
#undef SIMPLE_SCROLL_MODE

using $Font = ::java::awt::Font;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $List = ::java::awt::List;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JList = ::javax::swing::JList;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $LWListPeer = ::sun::lwawt::LWListPeer;
using $LWListPeer$ScrollableJList$1 = ::sun::lwawt::LWListPeer$ScrollableJList$1;
using $LWListPeer$ScrollableJList$JListDelegate = ::sun::lwawt::LWListPeer$ScrollableJList$JListDelegate;

namespace sun {
	namespace lwawt {

$String* LWListPeer$ScrollableJList::toString() {
	 return this->$JScrollPane::toString();
}

int32_t LWListPeer$ScrollableJList::hashCode() {
	 return this->$JScrollPane::hashCode();
}

bool LWListPeer$ScrollableJList::equals(Object$* arg0) {
	 return this->$JScrollPane::equals(arg0);
}

$Object* LWListPeer$ScrollableJList::clone() {
	 return this->$JScrollPane::clone();
}

void LWListPeer$ScrollableJList::finalize() {
	this->$JScrollPane::finalize();
}

void LWListPeer$ScrollableJList::init$($LWListPeer* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$JScrollPane::init$();
	$set(this, model, $new($LWListPeer$ScrollableJList$1, this));
	$set(this, oldSelectedIndices, $new($ints, 0));
	$$nc(getViewport())->setScrollMode($JViewport::SIMPLE_SCROLL_MODE);
	$var($JList, list, $new($LWListPeer$ScrollableJList$JListDelegate, this));
	list->addListSelectionListener(this);
	$$nc(getViewport())->setView(list);
	$var($StringArray, items, $$sure($List, this$0->getTarget())->getItems());
	for (int32_t i = 0; i < $nc(items)->length; ++i) {
		this->model->add(i, items->get(i));
	}
}

bool LWListPeer$ScrollableJList::isSkipStateChangedEvent() {
	return this->skipStateChangedEvent;
}

void LWListPeer$ScrollableJList::setSkipStateChangedEvent(bool skipStateChangedEvent) {
	this->skipStateChangedEvent = skipStateChangedEvent;
}

void LWListPeer$ScrollableJList::valueChanged($ListSelectionEvent* e) {
	$useLocalObjectStack();
	bool var$0 = !$nc(e)->getValueIsAdjusting();
	if (var$0 && !isSkipStateChangedEvent()) {
		$var($JList, source, $cast($JList, e->getSource()));
		for (int32_t i = 0; i < $$nc($nc(source)->getModel())->getSize(); ++i) {
			bool wasSelected = $Arrays::binarySearch(this->oldSelectedIndices, i) >= 0;
			bool isSelected = source->isSelectedIndex(i);
			if (wasSelected == isSelected) {
				continue;
			}
			int32_t state = !wasSelected && isSelected ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED;
			$var($ItemSelectable, var$1, $cast($ItemSelectable, this->this$0->getTarget()));
			this->this$0->postEvent($$new($ItemEvent, var$1, $ItemEvent::ITEM_STATE_CHANGED, $($Integer::valueOf(i)), state));
		}
		$set(this, oldSelectedIndices, source->getSelectedIndices());
	}
}

$JList* LWListPeer$ScrollableJList::getView() {
	return $cast($JList, $$nc(getViewport())->getView());
}

$DefaultListModel* LWListPeer$ScrollableJList::getModel() {
	return this->model;
}

void LWListPeer$ScrollableJList::setEnabled(bool enabled) {
	$$nc(getView())->setEnabled(enabled);
	$JScrollPane::setEnabled(enabled);
}

void LWListPeer$ScrollableJList::setOpaque(bool isOpaque) {
	$JScrollPane::setOpaque(isOpaque);
	if (getView() != nullptr) {
		$$nc(getView())->setOpaque(isOpaque);
	}
}

void LWListPeer$ScrollableJList::setFont($Font* font) {
	$JScrollPane::setFont(font);
	if (getView() != nullptr) {
		$$nc(getView())->setFont(font);
		this->this$0->revalidate();
	}
}

LWListPeer$ScrollableJList::LWListPeer$ScrollableJList() {
}

$Class* LWListPeer$ScrollableJList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/LWListPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWListPeer$ScrollableJList, this$0)},
		{"skipStateChangedEvent", "Z", nullptr, $PRIVATE, $field(LWListPeer$ScrollableJList, skipStateChangedEvent)},
		{"model", "Ljavax/swing/DefaultListModel;", "Ljavax/swing/DefaultListModel<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(LWListPeer$ScrollableJList, model)},
		{"oldSelectedIndices", "[I", nullptr, $PRIVATE, $field(LWListPeer$ScrollableJList, oldSelectedIndices)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lsun/lwawt/LWListPeer;)V", nullptr, 0, $method(LWListPeer$ScrollableJList, init$, void, $LWListPeer*)},
		{"getModel", "()Ljavax/swing/DefaultListModel;", "()Ljavax/swing/DefaultListModel<Ljava/lang/String;>;", $PUBLIC, $method(LWListPeer$ScrollableJList, getModel, $DefaultListModel*)},
		{"getView", "()Ljavax/swing/JList;", "()Ljavax/swing/JList<Ljava/lang/String;>;", $PUBLIC, $method(LWListPeer$ScrollableJList, getView, $JList*)},
		{"isSkipStateChangedEvent", "()Z", nullptr, $PUBLIC, $method(LWListPeer$ScrollableJList, isSkipStateChangedEvent, bool)},
		{"setEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(LWListPeer$ScrollableJList, setEnabled, void, bool)},
		{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $virtualMethod(LWListPeer$ScrollableJList, setFont, void, $Font*)},
		{"setOpaque", "(Z)V", nullptr, $PUBLIC, $virtualMethod(LWListPeer$ScrollableJList, setOpaque, void, bool)},
		{"setSkipStateChangedEvent", "(Z)V", nullptr, $PUBLIC, $method(LWListPeer$ScrollableJList, setSkipStateChangedEvent, void, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC, $virtualMethod(LWListPeer$ScrollableJList, valueChanged, void, $ListSelectionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWListPeer$ScrollableJList", "sun.lwawt.LWListPeer", "ScrollableJList", $FINAL},
		{"sun.lwawt.LWListPeer$ScrollableJList$JListDelegate", "sun.lwawt.LWListPeer$ScrollableJList", "JListDelegate", $PRIVATE | $FINAL},
		{"sun.lwawt.LWListPeer$ScrollableJList$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.LWListPeer$ScrollableJList",
		"javax.swing.JScrollPane",
		"javax.swing.event.ListSelectionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.LWListPeer"
	};
	$loadClass(LWListPeer$ScrollableJList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LWListPeer$ScrollableJList));
	});
	return class$;
}

$Class* LWListPeer$ScrollableJList::class$ = nullptr;

	} // lwawt
} // sun