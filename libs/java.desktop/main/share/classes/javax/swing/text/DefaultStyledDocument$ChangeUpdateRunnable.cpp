#include <javax/swing/text/DefaultStyledDocument$ChangeUpdateRunnable.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <jcpp.h>

#undef CHANGE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $AbstractDocument$DefaultDocumentEvent = ::javax::swing::text::AbstractDocument$DefaultDocumentEvent;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;

namespace javax {
	namespace swing {
		namespace text {

void DefaultStyledDocument$ChangeUpdateRunnable::init$($DefaultStyledDocument* this$0) {
	$set(this, this$0, this$0);
	this->isPending = false;
}

void DefaultStyledDocument$ChangeUpdateRunnable::run() {
	$useLocalObjectStack();
	$synchronized(this) {
		this->isPending = false;
	}
	$var($Throwable, var$0, nullptr);
	try {
		this->this$0->writeLock();
		$init($DocumentEvent$EventType);
		$var($AbstractDocument$DefaultDocumentEvent, dde, $new($AbstractDocument$DefaultDocumentEvent, this->this$0, 0, this->this$0->getLength(), $DocumentEvent$EventType::CHANGE));
		dde->end();
		this->this$0->fireChangedUpdate(dde);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->this$0->writeUnlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

DefaultStyledDocument$ChangeUpdateRunnable::DefaultStyledDocument$ChangeUpdateRunnable() {
}

$Class* DefaultStyledDocument$ChangeUpdateRunnable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/DefaultStyledDocument;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultStyledDocument$ChangeUpdateRunnable, this$0)},
		{"isPending", "Z", nullptr, 0, $field(DefaultStyledDocument$ChangeUpdateRunnable, isPending)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/DefaultStyledDocument;)V", nullptr, 0, $method(DefaultStyledDocument$ChangeUpdateRunnable, init$, void, $DefaultStyledDocument*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultStyledDocument$ChangeUpdateRunnable, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultStyledDocument$ChangeUpdateRunnable", "javax.swing.text.DefaultStyledDocument", "ChangeUpdateRunnable", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultStyledDocument$ChangeUpdateRunnable",
		"java.lang.Object",
		"java.lang.Runnable",
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
	$loadClass(DefaultStyledDocument$ChangeUpdateRunnable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultStyledDocument$ChangeUpdateRunnable);
	});
	return class$;
}

$Class* DefaultStyledDocument$ChangeUpdateRunnable::class$ = nullptr;

		} // text
	} // swing
} // javax