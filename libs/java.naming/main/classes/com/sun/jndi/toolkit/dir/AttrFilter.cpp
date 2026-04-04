#include <com/sun/jndi/toolkit/dir/AttrFilter.h>
#include <javax/naming/directory/Attributes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::javax::naming::directory::Attributes;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$Class* AttrFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"check", "(Ljavax/naming/directory/Attributes;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttrFilter, check, bool, $Attributes*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.jndi.toolkit.dir.AttrFilter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AttrFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttrFilter);
	});
	return class$;
}

$Class* AttrFilter::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com