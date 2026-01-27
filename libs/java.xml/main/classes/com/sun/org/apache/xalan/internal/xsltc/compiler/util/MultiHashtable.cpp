#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MultiHashtable.h>

#include <java/io/Serializable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

class MultiHashtable$$Lambda$lambda$put$0 : public $Function {
	$class(MultiHashtable$$Lambda$lambda$put$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* k) override {
		 return $of(MultiHashtable::lambda$put$0(k));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiHashtable$$Lambda$lambda$put$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MultiHashtable$$Lambda$lambda$put$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MultiHashtable$$Lambda$lambda$put$0, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MultiHashtable$$Lambda$lambda$put$0, apply, $Object*, Object$*)},
	{}
};
$ClassInfo MultiHashtable$$Lambda$lambda$put$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MultiHashtable$$Lambda$lambda$put$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* MultiHashtable$$Lambda$lambda$put$0::load$($String* name, bool initialize) {
	$loadClass(MultiHashtable$$Lambda$lambda$put$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiHashtable$$Lambda$lambda$put$0::class$ = nullptr;

$FieldInfo _MultiHashtable_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(MultiHashtable, serialVersionUID)},
	{"map", "Ljava/util/Map;", "Ljava/util/Map<TK;Ljava/util/Set<TV;>;>;", $PRIVATE | $FINAL, $field(MultiHashtable, map)},
	{"modifiable", "Z", nullptr, $PRIVATE, $field(MultiHashtable, modifiable)},
	{}
};

$MethodInfo _MultiHashtable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MultiHashtable, init$, void)},
	{"lambda$put$0", "(Ljava/lang/Object;)Ljava/util/Set;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MultiHashtable, lambda$put$0, $Set*, Object$*)},
	{"makeUnmodifiable", "()V", nullptr, $PUBLIC, $method(MultiHashtable, makeUnmodifiable, void)},
	{"maps", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC, $method(MultiHashtable, maps, $Object*, Object$*, Object$*)},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;", "(TK;TV;)Ljava/util/Set<TV;>;", $PUBLIC, $method(MultiHashtable, put, $Set*, Object$*, Object$*)},
	{}
};

$ClassInfo _MultiHashtable_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MultiHashtable",
	"java.lang.Object",
	nullptr,
	_MultiHashtable_FieldInfo_,
	_MultiHashtable_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$MultiHashtable($Class* clazz) {
	return $of($alloc(MultiHashtable));
}

void MultiHashtable::init$() {
	$set(this, map, $new($HashMap));
	this->modifiable = true;
}

$Set* MultiHashtable::put(Object$* key, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if (this->modifiable) {
		$var($Set, set, $cast($Set, $nc(this->map)->computeIfAbsent(key, static_cast<$Function*>($$new(MultiHashtable$$Lambda$lambda$put$0)))));
		$nc(set)->add(value);
		return set;
	}
	$throwNew($UnsupportedOperationException, "The MultiHashtable instance is not modifiable."_s);
}

$Object* MultiHashtable::maps(Object$* key, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if (key == nullptr) {
		return $of(nullptr);
	}
	$var($Set, set, $cast($Set, $nc(this->map)->get(key)));
	if (set != nullptr) {
		{
			$var($Iterator, i$, set->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, v, i$->next());
				{
					if ($nc($of(v))->equals(value)) {
						return $of(v);
					}
				}
			}
		}
	}
	return $of(nullptr);
}

void MultiHashtable::makeUnmodifiable() {
	this->modifiable = false;
}

$Set* MultiHashtable::lambda$put$0(Object$* k) {
	return $new($HashSet);
}

MultiHashtable::MultiHashtable() {
}

$Class* MultiHashtable::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MultiHashtable$$Lambda$lambda$put$0::classInfo$.name)) {
			return MultiHashtable$$Lambda$lambda$put$0::load$(name, initialize);
		}
	}
	$loadClass(MultiHashtable, name, initialize, &_MultiHashtable_ClassInfo_, allocate$MultiHashtable);
	return class$;
}

$Class* MultiHashtable::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com