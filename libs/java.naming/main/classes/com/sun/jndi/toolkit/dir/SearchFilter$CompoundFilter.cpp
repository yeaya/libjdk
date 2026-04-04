#include <com/sun/jndi/toolkit/dir/SearchFilter$CompoundFilter.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter$StringFilter.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter.h>
#include <java/util/Vector.h>
#include <javax/naming/directory/Attributes.h>
#include <jcpp.h>

using $SearchFilter = ::com::sun::jndi::toolkit::dir::SearchFilter;
using $SearchFilter$StringFilter = ::com::sun::jndi::toolkit::dir::SearchFilter$StringFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Attributes = ::javax::naming::directory::Attributes;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

void SearchFilter$CompoundFilter::init$($SearchFilter* this$0, bool polarity) {
	$set(this, this$0, this$0);
	$set(this, subFilters, $new($Vector));
	this->polarity = polarity;
}

void SearchFilter$CompoundFilter::parse() {
	$useLocalObjectStack();
	this->this$0->consumeChar();
	while (this->this$0->getCurrentChar() != u')') {
		;
		$var($SearchFilter$StringFilter, filter, this->this$0->createNextFilter());
		$nc(this->subFilters)->addElement(filter);
		this->this$0->skipWhiteSpace();
	}
}

bool SearchFilter$CompoundFilter::check($Attributes* targetAttrs) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->subFilters)->size(); ++i) {
		$var($SearchFilter$StringFilter, filter, $cast($SearchFilter$StringFilter, this->subFilters->elementAt(i)));
		if ($nc(filter)->check(targetAttrs) != this->polarity) {
			return !this->polarity;
		}
	}
	return this->polarity;
}

SearchFilter$CompoundFilter::SearchFilter$CompoundFilter() {
}

$Class* SearchFilter$CompoundFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jndi/toolkit/dir/SearchFilter;", nullptr, $FINAL | $SYNTHETIC, $field(SearchFilter$CompoundFilter, this$0)},
		{"subFilters", "Ljava/util/Vector;", "Ljava/util/Vector<Lcom/sun/jndi/toolkit/dir/SearchFilter$StringFilter;>;", $PRIVATE, $field(SearchFilter$CompoundFilter, subFilters)},
		{"polarity", "Z", nullptr, $PRIVATE, $field(SearchFilter$CompoundFilter, polarity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jndi/toolkit/dir/SearchFilter;Z)V", nullptr, 0, $method(SearchFilter$CompoundFilter, init$, void, $SearchFilter*, bool)},
		{"check", "(Ljavax/naming/directory/Attributes;)Z", nullptr, $PUBLIC, $virtualMethod(SearchFilter$CompoundFilter, check, bool, $Attributes*), "javax.naming.NamingException"},
		{"parse", "()V", nullptr, $PUBLIC, $virtualMethod(SearchFilter$CompoundFilter, parse, void), "javax.naming.directory.InvalidSearchFilterException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.toolkit.dir.SearchFilter$CompoundFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "CompoundFilter", $FINAL},
		{"com.sun.jndi.toolkit.dir.SearchFilter$StringFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "StringFilter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.toolkit.dir.SearchFilter$CompoundFilter",
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
	$loadClass(SearchFilter$CompoundFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SearchFilter$CompoundFilter);
	});
	return class$;
}

$Class* SearchFilter$CompoundFilter::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com