#include <javax/swing/text/DefaultStyledDocument$AbstractChangeHandler.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/text/DefaultStyledDocument$AbstractChangeHandler$DocReference.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $DefaultStyledDocument$AbstractChangeHandler$DocReference = ::javax::swing::text::DefaultStyledDocument$AbstractChangeHandler$DocReference;

namespace javax {
	namespace swing {
		namespace text {

$Map* DefaultStyledDocument$AbstractChangeHandler::queueMap = nullptr;

void DefaultStyledDocument$AbstractChangeHandler::init$($DefaultStyledDocument* d) {
	$Class* c = $of(this)->getClass();
	$var($ReferenceQueue, q, nullptr);
	$synchronized(DefaultStyledDocument$AbstractChangeHandler::queueMap) {
		$assign(q, $cast($ReferenceQueue, DefaultStyledDocument$AbstractChangeHandler::queueMap->get(c)));
		if (q == nullptr) {
			$assign(q, $new($ReferenceQueue));
			DefaultStyledDocument$AbstractChangeHandler::queueMap->put(c, q);
		}
	}
	$set(this, doc, $new($DefaultStyledDocument$AbstractChangeHandler$DocReference, this, d, q));
}

$List* DefaultStyledDocument$AbstractChangeHandler::getStaleListeners($ChangeListener* l) {
	$init(DefaultStyledDocument$AbstractChangeHandler);
	$useLocalObjectStack();
	$var($List, staleListeners, $new($ArrayList));
	$var($ReferenceQueue, q, $cast($ReferenceQueue, DefaultStyledDocument$AbstractChangeHandler::queueMap->get($nc($of(l))->getClass())));
	if (q != nullptr) {
		$var($DefaultStyledDocument$AbstractChangeHandler$DocReference, r, nullptr);
		$synchronized(q) {
			while (($assign(r, $cast($DefaultStyledDocument$AbstractChangeHandler$DocReference, q->poll()))) != nullptr) {
				staleListeners->add($($nc(r)->getListener()));
			}
		}
	}
	return staleListeners;
}

void DefaultStyledDocument$AbstractChangeHandler::stateChanged($ChangeEvent* e) {
	$var($DefaultStyledDocument, d, $cast($DefaultStyledDocument, $nc(this->doc)->get()));
	if (d != nullptr) {
		fireStateChanged(d, e);
	}
}

void DefaultStyledDocument$AbstractChangeHandler::clinit$($Class* clazz) {
	$assignStatic(DefaultStyledDocument$AbstractChangeHandler::queueMap, $new($HashMap));
}

DefaultStyledDocument$AbstractChangeHandler::DefaultStyledDocument$AbstractChangeHandler() {
}

$Class* DefaultStyledDocument$AbstractChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"queueMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/lang/ref/ReferenceQueue<Ljavax/swing/text/DefaultStyledDocument;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultStyledDocument$AbstractChangeHandler, queueMap)},
		{"doc", "Ljavax/swing/text/DefaultStyledDocument$AbstractChangeHandler$DocReference;", nullptr, $PRIVATE, $field(DefaultStyledDocument$AbstractChangeHandler, doc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/DefaultStyledDocument;)V", nullptr, 0, $method(DefaultStyledDocument$AbstractChangeHandler, init$, void, $DefaultStyledDocument*)},
		{"fireStateChanged", "(Ljavax/swing/text/DefaultStyledDocument;Ljavax/swing/event/ChangeEvent;)V", nullptr, $ABSTRACT, $virtualMethod(DefaultStyledDocument$AbstractChangeHandler, fireStateChanged, void, $DefaultStyledDocument*, $ChangeEvent*)},
		{"getStaleListeners", "(Ljavax/swing/event/ChangeListener;)Ljava/util/List;", "(Ljavax/swing/event/ChangeListener;)Ljava/util/List<Ljavax/swing/event/ChangeListener;>;", $STATIC, $staticMethod(DefaultStyledDocument$AbstractChangeHandler, getStaleListeners, $List*, $ChangeListener*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultStyledDocument$AbstractChangeHandler, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultStyledDocument$AbstractChangeHandler", "javax.swing.text.DefaultStyledDocument", "AbstractChangeHandler", $STATIC | $ABSTRACT},
		{"javax.swing.text.DefaultStyledDocument$AbstractChangeHandler$DocReference", "javax.swing.text.DefaultStyledDocument$AbstractChangeHandler", "DocReference", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"javax.swing.text.DefaultStyledDocument$AbstractChangeHandler",
		"java.lang.Object",
		"javax.swing.event.ChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.DefaultStyledDocument"
	};
	$loadClass(DefaultStyledDocument$AbstractChangeHandler, name, initialize, &classInfo$$, DefaultStyledDocument$AbstractChangeHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultStyledDocument$AbstractChangeHandler);
	});
	return class$;
}

$Class* DefaultStyledDocument$AbstractChangeHandler::class$ = nullptr;

		} // text
	} // swing
} // javax