#include <com/sun/jndi/toolkit/dir/SearchFilter$StringFilter.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$Class* SearchFilter$StringFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"parse", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SearchFilter$StringFilter, parse, void), "javax.naming.directory.InvalidSearchFilterException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.toolkit.dir.SearchFilter$StringFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "StringFilter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.jndi.toolkit.dir.SearchFilter$StringFilter",
		nullptr,
		"com.sun.jndi.toolkit.dir.AttrFilter",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jndi.toolkit.dir.SearchFilter"
	};
	$loadClass(SearchFilter$StringFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SearchFilter$StringFilter);
	});
	return class$;
}

$Class* SearchFilter$StringFilter::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com