#include <javax/swing/ActionPropertyChangeListener$OwnedWeakReference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <javax/swing/ActionPropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ActionPropertyChangeListener = ::javax::swing::ActionPropertyChangeListener;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

void ActionPropertyChangeListener$OwnedWeakReference::init$($JComponent* target, $ReferenceQueue* queue, $ActionPropertyChangeListener* owner) {
	$WeakReference::init$(target, queue);
	$set(this, owner, owner);
}

$ActionPropertyChangeListener* ActionPropertyChangeListener$OwnedWeakReference::getOwner() {
	return this->owner;
}

ActionPropertyChangeListener$OwnedWeakReference::ActionPropertyChangeListener$OwnedWeakReference() {
}

$Class* ActionPropertyChangeListener$OwnedWeakReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"owner", "Ljavax/swing/ActionPropertyChangeListener;", "Ljavax/swing/ActionPropertyChangeListener<*>;", $PRIVATE, $field(ActionPropertyChangeListener$OwnedWeakReference, owner)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComponent;Ljava/lang/ref/ReferenceQueue;Ljavax/swing/ActionPropertyChangeListener;)V", "(TU;Ljava/lang/ref/ReferenceQueue<-TU;>;Ljavax/swing/ActionPropertyChangeListener<*>;)V", 0, $method(ActionPropertyChangeListener$OwnedWeakReference, init$, void, $JComponent*, $ReferenceQueue*, $ActionPropertyChangeListener*)},
		{"getOwner", "()Ljavax/swing/ActionPropertyChangeListener;", "()Ljavax/swing/ActionPropertyChangeListener<*>;", $PUBLIC, $virtualMethod(ActionPropertyChangeListener$OwnedWeakReference, getOwner, $ActionPropertyChangeListener*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ActionPropertyChangeListener$OwnedWeakReference", "javax.swing.ActionPropertyChangeListener", "OwnedWeakReference", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.ActionPropertyChangeListener$OwnedWeakReference",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<U:Ljavax/swing/JComponent;>Ljava/lang/ref/WeakReference<TU;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.ActionPropertyChangeListener"
	};
	$loadClass(ActionPropertyChangeListener$OwnedWeakReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ActionPropertyChangeListener$OwnedWeakReference);
	});
	return class$;
}

$Class* ActionPropertyChangeListener$OwnedWeakReference::class$ = nullptr;

	} // swing
} // javax