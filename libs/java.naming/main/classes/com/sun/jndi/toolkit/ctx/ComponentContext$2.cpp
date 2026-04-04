#include <com/sun/jndi/toolkit/ctx/ComponentContext$2.h>
#include <com/sun/jndi/toolkit/ctx/ComponentContext.h>
#include <javax/naming/RefAddr.h>
#include <jcpp.h>

using $ComponentContext = ::com::sun::jndi::toolkit::ctx::ComponentContext;
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

void ComponentContext$2::init$($ComponentContext* this$0, $String* addrType) {
	$set(this, this$0, this$0);
	$RefAddr::init$(addrType);
}

$Object* ComponentContext$2::getContent() {
	return $of(this->this$0);
}

ComponentContext$2::ComponentContext$2() {
}

$Class* ComponentContext$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jndi/toolkit/ctx/ComponentContext;", nullptr, $FINAL | $SYNTHETIC, $field(ComponentContext$2, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ComponentContext$2, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jndi/toolkit/ctx/ComponentContext;Ljava/lang/String;)V", nullptr, 0, $method(ComponentContext$2, init$, void, $ComponentContext*, $String*)},
		{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ComponentContext$2, getContent, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jndi.toolkit.ctx.ComponentContext",
		"c_processJunction_nns",
		"(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.toolkit.ctx.ComponentContext$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jndi.toolkit.ctx.ComponentContext$2",
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
		"com.sun.jndi.toolkit.ctx.ComponentContext"
	};
	$loadClass(ComponentContext$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ComponentContext$2);
	});
	return class$;
}

$Class* ComponentContext$2::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com