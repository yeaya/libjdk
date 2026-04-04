#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeMetadata$Entry$Kind.h>
#include <com/sun/tools/javac/code/TypeMetadata$Entry.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/util/EnumMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef EMPTY

using $TypeMetadata$Entry = ::com::sun::tools::javac::code::TypeMetadata$Entry;
using $TypeMetadata$Entry$Kind = ::com::sun::tools::javac::code::TypeMetadata$Entry$Kind;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumMap = ::java::util::EnumMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

TypeMetadata* TypeMetadata::EMPTY = nullptr;

void TypeMetadata::init$() {
	$load($TypeMetadata$Entry$Kind);
	$set(this, contents, $new($EnumMap, $TypeMetadata$Entry$Kind::class$));
}

void TypeMetadata::init$($TypeMetadata$Entry* elem) {
	TypeMetadata::init$();
	$Assert::checkNonNull(elem);
	$nc(this->contents)->put($($nc(elem)->kind()), elem);
}

void TypeMetadata::init$(TypeMetadata* other) {
	$Assert::checkNonNull(other);
	$set(this, contents, $cast($EnumMap, $nc($nc(other)->contents)->clone()));
}

TypeMetadata* TypeMetadata::combine($TypeMetadata$Entry* elem) {
	$useLocalObjectStack();
	$Assert::checkNonNull(elem);
	$var(TypeMetadata, out, $new(TypeMetadata, this));
	$TypeMetadata$Entry$Kind* key = $nc(elem)->kind();
	if ($nc(this->contents)->containsKey(key)) {
		out->add(key, $($$sure($TypeMetadata$Entry, $nc(this->contents)->get(key))->combine(elem)));
	} else {
		out->add(key, elem);
	}
	return out;
}

TypeMetadata* TypeMetadata::combineAll(TypeMetadata* other) {
	$useLocalObjectStack();
	$Assert::checkNonNull(other);
	$var(TypeMetadata, out, $new(TypeMetadata));
	$var($Set, keys, $new($HashSet, $($nc(this->contents)->keySet())));
	keys->addAll($($nc($nc(other)->contents)->keySet()));
	{
		$var($Iterator, i$, keys->iterator());
		for (; $nc(i$)->hasNext();) {
			$TypeMetadata$Entry$Kind* key = $cast($TypeMetadata$Entry$Kind, i$->next());
			if (this->contents->containsKey(key)) {
				if (other->contents->containsKey(key)) {
					out->add(key, $($$sure($TypeMetadata$Entry, this->contents->get(key))->combine($$cast($TypeMetadata$Entry, other->contents->get(key)))));
				} else {
					out->add(key, $$cast($TypeMetadata$Entry, this->contents->get(key)));
				}
			} else if (other->contents->containsKey(key)) {
				out->add(key, $$cast($TypeMetadata$Entry, other->contents->get(key)));
			}
		}
	}
	return out;
}

TypeMetadata* TypeMetadata::without($TypeMetadata$Entry$Kind* kind) {
	if (this == TypeMetadata::EMPTY || $nc(this->contents)->get(kind) == nullptr) {
		return this;
	}
	$var(TypeMetadata, out, $new(TypeMetadata, this));
	$nc(out->contents)->remove(kind);
	return out->contents->isEmpty() ? TypeMetadata::EMPTY : out;
}

$TypeMetadata$Entry* TypeMetadata::get($TypeMetadata$Entry$Kind* kind) {
	return $cast($TypeMetadata$Entry, $nc(this->contents)->get(kind));
}

void TypeMetadata::add($TypeMetadata$Entry$Kind* kind, $TypeMetadata$Entry* elem) {
	$nc(this->contents)->put(kind, elem);
}

void TypeMetadata::clinit$($Class* clazz) {
	$assignStatic(TypeMetadata::EMPTY, $new(TypeMetadata));
}

TypeMetadata::TypeMetadata() {
}

$Class* TypeMetadata::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EMPTY", "Lcom/sun/tools/javac/code/TypeMetadata;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TypeMetadata, EMPTY)},
		{"contents", "Ljava/util/EnumMap;", "Ljava/util/EnumMap<Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;Lcom/sun/tools/javac/code/TypeMetadata$Entry;>;", $PRIVATE | $FINAL, $field(TypeMetadata, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TypeMetadata, init$, void)},
		{"<init>", "(Lcom/sun/tools/javac/code/TypeMetadata$Entry;)V", nullptr, $PUBLIC, $method(TypeMetadata, init$, void, $TypeMetadata$Entry*)},
		{"<init>", "(Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, $PUBLIC, $method(TypeMetadata, init$, void, TypeMetadata*)},
		{"add", "(Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;Lcom/sun/tools/javac/code/TypeMetadata$Entry;)V", nullptr, $PRIVATE, $method(TypeMetadata, add, void, $TypeMetadata$Entry$Kind*, $TypeMetadata$Entry*)},
		{"combine", "(Lcom/sun/tools/javac/code/TypeMetadata$Entry;)Lcom/sun/tools/javac/code/TypeMetadata;", nullptr, $PUBLIC, $virtualMethod(TypeMetadata, combine, TypeMetadata*, $TypeMetadata$Entry*)},
		{"combineAll", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/TypeMetadata;", nullptr, $PUBLIC, $virtualMethod(TypeMetadata, combineAll, TypeMetadata*, TypeMetadata*)},
		{"get", "(Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;)Lcom/sun/tools/javac/code/TypeMetadata$Entry;", nullptr, $PUBLIC, $virtualMethod(TypeMetadata, get, $TypeMetadata$Entry*, $TypeMetadata$Entry$Kind*)},
		{"without", "(Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;)Lcom/sun/tools/javac/code/TypeMetadata;", nullptr, $PUBLIC, $virtualMethod(TypeMetadata, without, TypeMetadata*, $TypeMetadata$Entry$Kind*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.TypeMetadata$Annotations", "com.sun.tools.javac.code.TypeMetadata", "Annotations", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.TypeMetadata$Entry", "com.sun.tools.javac.code.TypeMetadata", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.TypeMetadata",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.TypeMetadata$Annotations,com.sun.tools.javac.code.TypeMetadata$Entry,com.sun.tools.javac.code.TypeMetadata$Entry$Kind"
	};
	$loadClass(TypeMetadata, name, initialize, &classInfo$$, TypeMetadata::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TypeMetadata);
	});
	return class$;
}

$Class* TypeMetadata::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com