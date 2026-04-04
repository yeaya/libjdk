#include <com/sun/jndi/toolkit/dir/HierarchicalName.h>
#include <com/sun/jndi/toolkit/dir/HierarchicalName$1.h>
#include <com/sun/jndi/toolkit/dir/HierarchicalNameParser.h>
#include <java/util/Enumeration.h>
#include <java/util/Locale.h>
#include <java/util/Properties.h>
#include <javax/naming/CompoundName.h>
#include <javax/naming/Name.h>
#include <jcpp.h>

#undef ENGLISH

using $HierarchicalName$1 = ::com::sun::jndi::toolkit::dir::HierarchicalName$1;
using $HierarchicalNameParser = ::com::sun::jndi::toolkit::dir::HierarchicalNameParser;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Locale = ::java::util::Locale;
using $Properties = ::java::util::Properties;
using $CompoundName = ::javax::naming::CompoundName;
using $Name = ::javax::naming::Name;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

void HierarchicalName::init$() {
	$init($HierarchicalNameParser);
	$CompoundName::init$($$new($HierarchicalName$1), $HierarchicalNameParser::mySyntax);
	this->hashValue = -1;
}

void HierarchicalName::init$($Enumeration* comps, $Properties* syntax) {
	$CompoundName::init$(comps, syntax);
	this->hashValue = -1;
}

void HierarchicalName::init$($String* n, $Properties* syntax) {
	$CompoundName::init$(n, syntax);
	this->hashValue = -1;
}

int32_t HierarchicalName::hashCode() {
	$useLocalObjectStack();
	if (this->hashValue == -1) {
		$init($Locale);
		$var($String, name, $$nc(toString())->toUpperCase($Locale::ENGLISH));
		int32_t len = name->length();
		int32_t off = 0;
		$var($chars, val, $new($chars, len));
		name->getChars(0, len, val, 0);
		for (int32_t i = len; i > 0; --i) {
			this->hashValue = (this->hashValue * 37) + val->get(off++);
		}
	}
	return this->hashValue;
}

$Name* HierarchicalName::getPrefix(int32_t posn) {
	$useLocalObjectStack();
	$var($Enumeration, comps, $$nc($CompoundName::getPrefix(posn))->getAll());
	return ($new(HierarchicalName, comps, this->mySyntax));
}

$Name* HierarchicalName::getSuffix(int32_t posn) {
	$useLocalObjectStack();
	$var($Enumeration, comps, $$nc($CompoundName::getSuffix(posn))->getAll());
	return ($new(HierarchicalName, comps, this->mySyntax));
}

$Object* HierarchicalName::clone() {
	return ($of($new(HierarchicalName, $(getAll()), this->mySyntax)));
}

HierarchicalName::HierarchicalName() {
}

$Class* HierarchicalName::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hashValue", "I", nullptr, $PRIVATE, $field(HierarchicalName, hashValue)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HierarchicalName, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HierarchicalName, init$, void)},
		{"<init>", "(Ljava/util/Enumeration;Ljava/util/Properties;)V", "(Ljava/util/Enumeration<Ljava/lang/String;>;Ljava/util/Properties;)V", 0, $method(HierarchicalName, init$, void, $Enumeration*, $Properties*)},
		{"<init>", "(Ljava/lang/String;Ljava/util/Properties;)V", nullptr, 0, $method(HierarchicalName, init$, void, $String*, $Properties*), "javax.naming.InvalidNameException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HierarchicalName, clone, $Object*)},
		{"getPrefix", "(I)Ljavax/naming/Name;", nullptr, $PUBLIC, $virtualMethod(HierarchicalName, getPrefix, $Name*, int32_t)},
		{"getSuffix", "(I)Ljavax/naming/Name;", nullptr, $PUBLIC, $virtualMethod(HierarchicalName, getSuffix, $Name*, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(HierarchicalName, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.toolkit.dir.HierarchicalName$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.toolkit.dir.HierarchicalName",
		"javax.naming.CompoundName",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.jndi.toolkit.dir.HierarchicalName$1"
	};
	$loadClass(HierarchicalName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HierarchicalName));
	});
	return class$;
}

$Class* HierarchicalName::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com