#include <javax/swing/text/AbstractDocument$1.h>
#include <javax/swing/text/AbstractDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;

namespace javax {
	namespace swing {
		namespace text {

void AbstractDocument$1::init$($AbstractDocument* this$0) {
	$set(this, this$0, this$0);
}

$Object* AbstractDocument$1::run() {
	return $of($System::getProperty("i18n"_s));
}

AbstractDocument$1::AbstractDocument$1() {
}

$Class* AbstractDocument$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/AbstractDocument;)V", nullptr, 0, $method(AbstractDocument$1, init$, void, $AbstractDocument*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractDocument$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.AbstractDocument",
		"<init>",
		"(Ljavax/swing/text/AbstractDocument$Content;Ljavax/swing/text/AbstractDocument$AttributeContext;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.AbstractDocument$1", nullptr, nullptr, 0},
		{"javax.swing.text.AbstractDocument$Content", "javax.swing.text.AbstractDocument", "Content", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.swing.text.AbstractDocument$AttributeContext", "javax.swing.text.AbstractDocument", "AttributeContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.AbstractDocument$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.AbstractDocument"
	};
	$loadClass(AbstractDocument$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractDocument$1);
	});
	return class$;
}

$Class* AbstractDocument$1::class$ = nullptr;

		} // text
	} // swing
} // javax