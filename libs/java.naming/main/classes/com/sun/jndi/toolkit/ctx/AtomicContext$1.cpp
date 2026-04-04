#include <com/sun/jndi/toolkit/ctx/AtomicContext$1.h>
#include <com/sun/jndi/toolkit/ctx/AtomicContext.h>
#include <javax/naming/RefAddr.h>
#include <jcpp.h>

using $AtomicContext = ::com::sun::jndi::toolkit::ctx::AtomicContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RefAddr = ::javax::naming::RefAddr;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

void AtomicContext$1::init$($AtomicContext* this$0, $String* addrType, Object$* val$obj) {
	$set(this, this$0, this$0);
	$set(this, val$obj, val$obj);
	$RefAddr::init$(addrType);
}

$Object* AtomicContext$1::getContent() {
	return this->val$obj;
}

AtomicContext$1::AtomicContext$1() {
}

$Class* AtomicContext$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jndi/toolkit/ctx/AtomicContext;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicContext$1, this$0)},
		{"val$obj", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicContext$1, val$obj)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AtomicContext$1, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jndi/toolkit/ctx/AtomicContext;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $method(AtomicContext$1, init$, void, $AtomicContext*, $String*, Object$*)},
		{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AtomicContext$1, getContent, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jndi.toolkit.ctx.AtomicContext",
		"a_resolveIntermediate_nns",
		"(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.toolkit.ctx.AtomicContext$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jndi.toolkit.ctx.AtomicContext$1",
		"javax.naming.RefAddr",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jndi.toolkit.ctx.AtomicContext"
	};
	$loadClass(AtomicContext$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicContext$1);
	});
	return class$;
}

$Class* AtomicContext$1::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com