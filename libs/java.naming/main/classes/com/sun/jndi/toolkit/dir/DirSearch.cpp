#include <com/sun/jndi/toolkit/dir/DirSearch.h>
#include <com/sun/jndi/toolkit/dir/ContainmentFilter.h>
#include <com/sun/jndi/toolkit/dir/ContextEnumerator.h>
#include <com/sun/jndi/toolkit/dir/LazySearchEnumerationImpl.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/SearchControls.h>
#include <jcpp.h>

#undef ONELEVEL_SCOPE

using $ContainmentFilter = ::com::sun::jndi::toolkit::dir::ContainmentFilter;
using $ContextEnumerator = ::com::sun::jndi::toolkit::dir::ContextEnumerator;
using $LazySearchEnumerationImpl = ::com::sun::jndi::toolkit::dir::LazySearchEnumerationImpl;
using $SearchFilter = ::com::sun::jndi::toolkit::dir::SearchFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $SearchControls = ::javax::naming::directory::SearchControls;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

void DirSearch::init$() {
}

$NamingEnumeration* DirSearch::search($DirContext* ctx, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	$useLocalObjectStack();
	$var($SearchControls, cons, $new($SearchControls, $SearchControls::ONELEVEL_SCOPE, 0, 0, attributesToReturn, false, false));
	$var($NamingEnumeration, var$0, $new($ContextEnumerator, ctx, $SearchControls::ONELEVEL_SCOPE));
	return $new($LazySearchEnumerationImpl, var$0, $$new($ContainmentFilter, matchingAttributes), cons);
}

$NamingEnumeration* DirSearch::search($DirContext* ctx, $String* filter, $SearchControls* cons$renamed) {
	$useLocalObjectStack();
	$var($SearchControls, cons, cons$renamed);
	if (cons == nullptr) {
		$assign(cons, $new($SearchControls));
	}
	$var($NamingEnumeration, var$0, $new($ContextEnumerator, ctx, $nc(cons)->getSearchScope()));
	return $new($LazySearchEnumerationImpl, var$0, $$new($SearchFilter, filter), cons);
}

$NamingEnumeration* DirSearch::search($DirContext* ctx, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	$var($String, strfilter, $SearchFilter::format(filterExpr, filterArgs));
	return search(ctx, strfilter, cons);
}

DirSearch::DirSearch() {
}

$Class* DirSearch::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DirSearch, init$, void)},
		{"search", "(Ljavax/naming/directory/DirContext;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/directory/DirContext;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC | $STATIC, $staticMethod(DirSearch, search, $NamingEnumeration*, $DirContext*, $Attributes*, $StringArray*), "javax.naming.NamingException"},
		{"search", "(Ljavax/naming/directory/DirContext;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/directory/DirContext;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC | $STATIC, $staticMethod(DirSearch, search, $NamingEnumeration*, $DirContext*, $String*, $SearchControls*), "javax.naming.NamingException"},
		{"search", "(Ljavax/naming/directory/DirContext;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/directory/DirContext;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC | $STATIC, $staticMethod(DirSearch, search, $NamingEnumeration*, $DirContext*, $String*, $ObjectArray*, $SearchControls*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.jndi.toolkit.dir.DirSearch",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DirSearch, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirSearch);
	});
	return class$;
}

$Class* DirSearch::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com