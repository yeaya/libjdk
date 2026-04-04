#include <javax/naming/event/EventContext.h>
#include <javax/naming/Name.h>
#include <javax/naming/event/NamingListener.h>
#include <jcpp.h>

#undef OBJECT_SCOPE
#undef ONELEVEL_SCOPE
#undef SUBTREE_SCOPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::naming::Name;
using $NamingListener = ::javax::naming::event::NamingListener;

namespace javax {
	namespace naming {
		namespace event {

$Class* EventContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"OBJECT_SCOPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(EventContext, OBJECT_SCOPE)},
		{"ONELEVEL_SCOPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(EventContext, ONELEVEL_SCOPE)},
		{"SUBTREE_SCOPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(EventContext, SUBTREE_SCOPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"addNamingListener", "(Ljavax/naming/Name;ILjavax/naming/event/NamingListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventContext, addNamingListener, void, $Name*, int32_t, $NamingListener*), "javax.naming.NamingException"},
		{"addNamingListener", "(Ljava/lang/String;ILjavax/naming/event/NamingListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventContext, addNamingListener, void, $String*, int32_t, $NamingListener*), "javax.naming.NamingException"},
		{"removeNamingListener", "(Ljavax/naming/event/NamingListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventContext, removeNamingListener, void, $NamingListener*), "javax.naming.NamingException"},
		{"targetMustExist", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EventContext, targetMustExist, bool), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.event.EventContext",
		nullptr,
		"javax.naming.Context",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EventContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventContext);
	});
	return class$;
}

$Class* EventContext::class$ = nullptr;

		} // event
	} // naming
} // javax