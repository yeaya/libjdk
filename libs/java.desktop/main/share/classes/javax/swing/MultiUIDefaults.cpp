#include <javax/swing/MultiUIDefaults.h>
#include <java/util/Enumeration.h>
#include <java/util/HashSet.h>
#include <java/util/Hashtable.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type.h>
#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

#undef ELEMENTS
#undef KEYS

using $UIDefaultsArray = $Array<::javax::swing::UIDefaults>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $HashSet = ::java::util::HashSet;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $MultiUIDefaults$MultiUIDefaultsEnumerator = ::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator;
using $MultiUIDefaults$MultiUIDefaultsEnumerator$Type = ::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace javax {
	namespace swing {

void MultiUIDefaults::init$($UIDefaultsArray* defaults) {
	$UIDefaults::init$();
	$set(this, tables, defaults);
}

void MultiUIDefaults::init$() {
	$UIDefaults::init$();
	$set(this, tables, $new($UIDefaultsArray, 0));
}

$Object* MultiUIDefaults::get(Object$* key) {
	$useLocalObjectStack();
	$var($Object, value, $UIDefaults::get(key));
	if (value != nullptr) {
		return value;
	}
	{
		$var($UIDefaultsArray, arr$, this->tables);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIDefaults, table, arr$->get(i$));
			{
				$assign(value, (table != nullptr) ? table->get(key) : ($Object*)nullptr);
				if (value != nullptr) {
					return value;
				}
			}
		}
	}
	return nullptr;
}

$Object* MultiUIDefaults::get(Object$* key, $Locale* l) {
	$useLocalObjectStack();
	$var($Object, value, $UIDefaults::get(key, l));
	if (value != nullptr) {
		return value;
	}
	{
		$var($UIDefaultsArray, arr$, this->tables);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIDefaults, table, arr$->get(i$));
			{
				$assign(value, (table != nullptr) ? table->get(key, l) : ($Object*)nullptr);
				if (value != nullptr) {
					return value;
				}
			}
		}
	}
	return nullptr;
}

int32_t MultiUIDefaults::size() {
	return $$nc(entrySet())->size();
}

bool MultiUIDefaults::isEmpty() {
	return size() == 0;
}

$Enumeration* MultiUIDefaults::keys() {
	$init($MultiUIDefaults$MultiUIDefaultsEnumerator$Type);
	return $new($MultiUIDefaults$MultiUIDefaultsEnumerator, $MultiUIDefaults$MultiUIDefaultsEnumerator$Type::KEYS, $(entrySet()));
}

$Set* MultiUIDefaults::keySet() {
	$useLocalObjectStack();
	$var($Set, set, $new($HashSet));
	for (int32_t i = $nc(this->tables)->length - 1; i >= 0; --i) {
		if (this->tables->get(i) != nullptr) {
			set->addAll($($nc(this->tables->get(i))->keySet()));
		}
	}
	set->addAll($($UIDefaults::keySet()));
	return set;
}

$Enumeration* MultiUIDefaults::elements() {
	$init($MultiUIDefaults$MultiUIDefaultsEnumerator$Type);
	return $new($MultiUIDefaults$MultiUIDefaultsEnumerator, $MultiUIDefaults$MultiUIDefaultsEnumerator$Type::ELEMENTS, $(entrySet()));
}

$Set* MultiUIDefaults::entrySet() {
	$useLocalObjectStack();
	$var($Set, set, $new($HashSet));
	for (int32_t i = $nc(this->tables)->length - 1; i >= 0; --i) {
		if (this->tables->get(i) != nullptr) {
			set->addAll($($nc(this->tables->get(i))->entrySet()));
		}
	}
	set->addAll($($UIDefaults::entrySet()));
	return set;
}

void MultiUIDefaults::getUIError($String* msg) {
	if (this->tables != nullptr && this->tables->length > 0 && this->tables->get(0) != nullptr) {
		$nc(this->tables->get(0))->getUIError(msg);
	} else {
		$UIDefaults::getUIError(msg);
	}
}

$Object* MultiUIDefaults::remove(Object$* key) {
	$useLocalObjectStack();
	$var($Object, value, nullptr);
	for (int32_t i = $nc(this->tables)->length - 1; i >= 0; --i) {
		if (this->tables->get(i) != nullptr) {
			$var($Object, v, $nc(this->tables->get(i))->remove(key));
			if (v != nullptr) {
				$assign(value, v);
			}
		}
	}
	$var($Object, v, $UIDefaults::remove(key));
	if (v != nullptr) {
		$assign(value, v);
	}
	return value;
}

void MultiUIDefaults::clear() {
	$useLocalObjectStack();
	$UIDefaults::clear();
	{
		$var($UIDefaultsArray, arr$, this->tables);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIDefaults, table, arr$->get(i$));
			if (table != nullptr) {
				table->clear();
			}
		}
	}
}

$String* MultiUIDefaults::toString() {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append("{"_s);
		$var($Enumeration, keys, this->keys());
		while ($nc(keys)->hasMoreElements()) {
			$var($Object, key, keys->nextElement());
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append(key);
			var$0->append("="_s);
			var$0->append($(get(key)));
			var$0->append(", "_s);
			sb->append($$str(var$0));
		}
		int32_t length = sb->length();
		if (length > 1) {
			sb->delete$(length - 2, length);
		}
		sb->append("}"_s);
		return sb->toString();
	}
}

MultiUIDefaults::MultiUIDefaults() {
}

$Class* MultiUIDefaults::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tables", "[Ljavax/swing/UIDefaults;", nullptr, $PRIVATE, $field(MultiUIDefaults, tables)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljavax/swing/UIDefaults;)V", nullptr, $PUBLIC, $method(MultiUIDefaults, init$, void, $UIDefaultsArray*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultiUIDefaults, init$, void)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(MultiUIDefaults, clear, void)},
		{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(MultiUIDefaults, elements, $Enumeration*)},
		{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", $PUBLIC, $virtualMethod(MultiUIDefaults, entrySet, $Set*)},
		{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MultiUIDefaults, get, $Object*, Object$*)},
		{"get", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MultiUIDefaults, get, $Object*, Object$*, $Locale*)},
		{"getUIError", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(MultiUIDefaults, getUIError, void, $String*)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(MultiUIDefaults, isEmpty, bool)},
		{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(MultiUIDefaults, keySet, $Set*)},
		{"keys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(MultiUIDefaults, keys, $Enumeration*)},
		{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MultiUIDefaults, remove, $Object*, Object$*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(MultiUIDefaults, size, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MultiUIDefaults, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.MultiUIDefaults$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator", "javax.swing.MultiUIDefaults", "MultiUIDefaultsEnumerator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.MultiUIDefaults",
		"javax.swing.UIDefaults",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.MultiUIDefaults$1,javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator,javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator$Type"
	};
	$loadClass(MultiUIDefaults, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MultiUIDefaults));
	});
	return class$;
}

$Class* MultiUIDefaults::class$ = nullptr;

	} // swing
} // javax