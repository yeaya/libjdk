#include <com/sun/jndi/toolkit/ctx/AtomicContext$2.h>
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

void AtomicContext$2::init$($AtomicContext* this$0, $String* addrType) {
	$set(this, this$0, this$0);
	$RefAddr::init$(addrType);
}

$Object* AtomicContext$2::getContent() {
	return $of(this->this$0);
}

AtomicContext$2::AtomicContext$2() {
}

$Class* AtomicContext$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jndi/toolkit/ctx/AtomicContext;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicContext$2, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AtomicContext$2, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jndi/toolkit/ctx/AtomicContext;Ljava/lang/String;)V", nullptr, 0, $method(AtomicContext$2, init$, void, $AtomicContext*, $String*)},
		{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AtomicContext$2, getContent, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jndi.toolkit.ctx.AtomicContext",
		"a_processJunction_nns",
		"(Lcom/sun/jndi/toolkit/ctx/Continuation;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.toolkit.ctx.AtomicContext$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jndi.toolkit.ctx.AtomicContext$2",
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
	$loadClass(AtomicContext$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicContext$2);
	});
	return class$;
}

$Class* AtomicContext$2::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com