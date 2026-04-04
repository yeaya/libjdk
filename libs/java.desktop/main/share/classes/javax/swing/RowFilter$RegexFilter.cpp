#include <javax/swing/RowFilter$RegexFilter.h>
#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter$GeneralFilter.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;
using $RowFilter$GeneralFilter = ::javax::swing::RowFilter$GeneralFilter;

namespace javax {
	namespace swing {

void RowFilter$RegexFilter::init$($Pattern* regex, $ints* columns) {
	$RowFilter$GeneralFilter::init$(columns);
	if (regex == nullptr) {
		$throwNew($IllegalArgumentException, "Pattern must be non-null"_s);
	}
	$set(this, matcher, $nc(regex)->matcher(""_s));
}

bool RowFilter$RegexFilter::include($RowFilter$Entry* value, int32_t index) {
	$nc(this->matcher)->reset($($nc(value)->getStringValue(index)));
	return $nc(this->matcher)->find();
}

RowFilter$RegexFilter::RowFilter$RegexFilter() {
}

$Class* RowFilter$RegexFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"matcher", "Ljava/util/regex/Matcher;", nullptr, $PRIVATE, $field(RowFilter$RegexFilter, matcher)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/regex/Pattern;[I)V", nullptr, 0, $method(RowFilter$RegexFilter, init$, void, $Pattern*, $ints*)},
		{"include", "(Ljavax/swing/RowFilter$Entry;I)Z", "(Ljavax/swing/RowFilter$Entry<+TM;+TI;>;I)Z", $PROTECTED, $virtualMethod(RowFilter$RegexFilter, include, bool, $RowFilter$Entry*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.RowFilter$RegexFilter", "javax.swing.RowFilter", "RegexFilter", $PRIVATE | $STATIC},
		{"javax.swing.RowFilter$GeneralFilter", "javax.swing.RowFilter", "GeneralFilter", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.RowFilter$RegexFilter",
		"javax.swing.RowFilter$GeneralFilter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<M:Ljava/lang/Object;I:Ljava/lang/Object;>Ljavax/swing/RowFilter$GeneralFilter<TM;TI;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.RowFilter"
	};
	$loadClass(RowFilter$RegexFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowFilter$RegexFilter);
	});
	return class$;
}

$Class* RowFilter$RegexFilter::class$ = nullptr;

	} // swing
} // javax