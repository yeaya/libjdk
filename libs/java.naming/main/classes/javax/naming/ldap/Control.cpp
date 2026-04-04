#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

#undef CRITICAL
#undef NONCRITICAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {
		namespace ldap {

$Class* Control::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CRITICAL", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Control, CRITICAL)},
		{"NONCRITICAL", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Control, NONCRITICAL)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getEncodedValue", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Control, getEncodedValue, $bytes*)},
		{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Control, getID, $String*)},
		{"isCritical", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Control, isCritical, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.ldap.Control",
		nullptr,
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Control, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Control);
	});
	return class$;
}

$Class* Control::class$ = nullptr;

		} // ldap
	} // naming
} // javax