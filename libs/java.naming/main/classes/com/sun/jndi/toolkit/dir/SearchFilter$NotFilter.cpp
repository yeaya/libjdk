#include <com/sun/jndi/toolkit/dir/SearchFilter$NotFilter.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter$StringFilter.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter.h>
#include <javax/naming/directory/Attributes.h>
#include <jcpp.h>

using $SearchFilter = ::com::sun::jndi::toolkit::dir::SearchFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::javax::naming::directory::Attributes;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

void SearchFilter$NotFilter::init$($SearchFilter* this$0) {
	$set(this, this$0, this$0);
}

void SearchFilter$NotFilter::parse() {
	this->this$0->consumeChar();
	$set(this, filter, this->this$0->createNextFilter());
}

bool SearchFilter$NotFilter::check($Attributes* targetAttrs) {
	return !$nc(this->filter)->check(targetAttrs);
}

SearchFilter$NotFilter::SearchFilter$NotFilter() {
}

$Class* SearchFilter$NotFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jndi/toolkit/dir/SearchFilter;", nullptr, $FINAL | $SYNTHETIC, $field(SearchFilter$NotFilter, this$0)},
		{"filter", "Lcom/sun/jndi/toolkit/dir/SearchFilter$StringFilter;", nullptr, $PRIVATE, $field(SearchFilter$NotFilter, filter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jndi/toolkit/dir/SearchFilter;)V", nullptr, 0, $method(SearchFilter$NotFilter, init$, void, $SearchFilter*)},
		{"check", "(Ljavax/naming/directory/Attributes;)Z", nullptr, $PUBLIC, $virtualMethod(SearchFilter$NotFilter, check, bool, $Attributes*), "javax.naming.NamingException"},
		{"parse", "()V", nullptr, $PUBLIC, $virtualMethod(SearchFilter$NotFilter, parse, void), "javax.naming.directory.InvalidSearchFilterException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.toolkit.dir.SearchFilter$NotFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "NotFilter", $FINAL},
		{"com.sun.jndi.toolkit.dir.SearchFilter$StringFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "StringFilter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.toolkit.dir.SearchFilter$NotFilter",
		"java.lang.Object",
		"com.sun.jndi.toolkit.dir.SearchFilter$StringFilter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jndi.toolkit.dir.SearchFilter"
	};
	$loadClass(SearchFilter$NotFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SearchFilter$NotFilter);
	});
	return class$;
}

$Class* SearchFilter$NotFilter::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com