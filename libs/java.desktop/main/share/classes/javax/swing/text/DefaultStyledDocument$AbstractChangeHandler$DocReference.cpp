#include <javax/swing/text/DefaultStyledDocument$AbstractChangeHandler$DocReference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/text/DefaultStyledDocument$AbstractChangeHandler.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $DefaultStyledDocument$AbstractChangeHandler = ::javax::swing::text::DefaultStyledDocument$AbstractChangeHandler;

namespace javax {
	namespace swing {
		namespace text {

void DefaultStyledDocument$AbstractChangeHandler$DocReference::init$($DefaultStyledDocument$AbstractChangeHandler* this$0, $DefaultStyledDocument* d, $ReferenceQueue* q) {
	$set(this, this$0, this$0);
	$WeakReference::init$(d, q);
}

$ChangeListener* DefaultStyledDocument$AbstractChangeHandler$DocReference::getListener() {
	return this->this$0;
}

DefaultStyledDocument$AbstractChangeHandler$DocReference::DefaultStyledDocument$AbstractChangeHandler$DocReference() {
}

$Class* DefaultStyledDocument$AbstractChangeHandler$DocReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/DefaultStyledDocument$AbstractChangeHandler;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultStyledDocument$AbstractChangeHandler$DocReference, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/DefaultStyledDocument$AbstractChangeHandler;Ljavax/swing/text/DefaultStyledDocument;Ljava/lang/ref/ReferenceQueue;)V", "(Ljavax/swing/text/DefaultStyledDocument;Ljava/lang/ref/ReferenceQueue<Ljavax/swing/text/DefaultStyledDocument;>;)V", 0, $method(DefaultStyledDocument$AbstractChangeHandler$DocReference, init$, void, $DefaultStyledDocument$AbstractChangeHandler*, $DefaultStyledDocument*, $ReferenceQueue*)},
		{"getListener", "()Ljavax/swing/event/ChangeListener;", nullptr, 0, $virtualMethod(DefaultStyledDocument$AbstractChangeHandler$DocReference, getListener, $ChangeListener*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultStyledDocument$AbstractChangeHandler", "javax.swing.text.DefaultStyledDocument", "AbstractChangeHandler", $STATIC | $ABSTRACT},
		{"javax.swing.text.DefaultStyledDocument$AbstractChangeHandler$DocReference", "javax.swing.text.DefaultStyledDocument$AbstractChangeHandler", "DocReference", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultStyledDocument$AbstractChangeHandler$DocReference",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/WeakReference<Ljavax/swing/text/DefaultStyledDocument;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.DefaultStyledDocument"
	};
	$loadClass(DefaultStyledDocument$AbstractChangeHandler$DocReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultStyledDocument$AbstractChangeHandler$DocReference);
	});
	return class$;
}

$Class* DefaultStyledDocument$AbstractChangeHandler$DocReference::class$ = nullptr;

		} // text
	} // swing
} // javax