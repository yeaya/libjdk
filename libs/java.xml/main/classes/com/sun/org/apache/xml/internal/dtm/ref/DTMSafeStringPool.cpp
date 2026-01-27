#include <com/sun/org/apache/xml/internal/dtm/ref/DTMSafeStringPool.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMStringPool.h>
#include <jcpp.h>

using $DTMStringPool = ::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$MethodInfo _DTMSafeStringPool_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DTMSafeStringPool, init$, void)},
	{"_main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DTMSafeStringPool, _main, void, $StringArray*)},
	{"indexToString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMSafeStringPool, indexToString, $String*, int32_t), "java.lang.ArrayIndexOutOfBoundsException"},
	{"removeAllElements", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMSafeStringPool, removeAllElements, void)},
	{"stringToIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DTMSafeStringPool, stringToIndex, int32_t, $String*)},
	{}
};

$ClassInfo _DTMSafeStringPool_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMSafeStringPool",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMStringPool",
	nullptr,
	nullptr,
	_DTMSafeStringPool_MethodInfo_
};

$Object* allocate$DTMSafeStringPool($Class* clazz) {
	return $of($alloc(DTMSafeStringPool));
}

void DTMSafeStringPool::init$() {
	$DTMStringPool::init$();
}

void DTMSafeStringPool::removeAllElements() {
	$synchronized(this) {
		$DTMStringPool::removeAllElements();
	}
}

$String* DTMSafeStringPool::indexToString(int32_t i) {
	$synchronized(this) {
		return $DTMStringPool::indexToString(i);
	}
}

int32_t DTMSafeStringPool::stringToIndex($String* s) {
	$synchronized(this) {
		return $DTMStringPool::stringToIndex(s);
	}
}

void DTMSafeStringPool::_main($StringArray* args) {
	$init(DTMSafeStringPool);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, word, $new($StringArray, {
		"Zero"_s,
		"One"_s,
		"Two"_s,
		"Three"_s,
		"Four"_s,
		"Five"_s,
		"Six"_s,
		"Seven"_s,
		"Eight"_s,
		"Nine"_s,
		"Ten"_s,
		"Eleven"_s,
		"Twelve"_s,
		"Thirteen"_s,
		"Fourteen"_s,
		"Fifteen"_s,
		"Sixteen"_s,
		"Seventeen"_s,
		"Eighteen"_s,
		"Nineteen"_s,
		"Twenty"_s,
		"Twenty-One"_s,
		"Twenty-Two"_s,
		"Twenty-Three"_s,
		"Twenty-Four"_s,
		"Twenty-Five"_s,
		"Twenty-Six"_s,
		"Twenty-Seven"_s,
		"Twenty-Eight"_s,
		"Twenty-Nine"_s,
		"Thirty"_s,
		"Thirty-One"_s,
		"Thirty-Two"_s,
		"Thirty-Three"_s,
		"Thirty-Four"_s,
		"Thirty-Five"_s,
		"Thirty-Six"_s,
		"Thirty-Seven"_s,
		"Thirty-Eight"_s,
		"Thirty-Nine"_s
	}));
	$var($DTMStringPool, pool, $new(DTMSafeStringPool));
	$nc($System::out)->println("If no complaints are printed below, we passed initial test."_s);
	for (int32_t pass = 0; pass <= 1; ++pass) {
		int32_t i = 0;
		for (i = 0; i < word->length; ++i) {
			int32_t j = pool->stringToIndex(word->get(i));
			if (j != i) {
				$nc($System::out)->println($$str({"\tMismatch populating pool: assigned "_s, $$str(j), " for create "_s, $$str(i)}));
			}
		}
		for (i = 0; i < word->length; ++i) {
			int32_t j = pool->stringToIndex(word->get(i));
			if (j != i) {
				$nc($System::out)->println($$str({"\tMismatch in stringToIndex: returned "_s, $$str(j), " for lookup "_s, $$str(i)}));
			}
		}
		for (i = 0; i < word->length; ++i) {
			$var($String, w, pool->indexToString(i));
			if (!$nc(word->get(i))->equals(w)) {
				$nc($System::out)->println($$str({"\tMismatch in indexToString: returned"_s, w, " for lookup "_s, $$str(i)}));
			}
		}
		pool->removeAllElements();
		$nc($System::out)->println($$str({"\nPass "_s, $$str(pass), " complete\n"_s}));
	}
}

DTMSafeStringPool::DTMSafeStringPool() {
}

$Class* DTMSafeStringPool::load$($String* name, bool initialize) {
	$loadClass(DTMSafeStringPool, name, initialize, &_DTMSafeStringPool_ClassInfo_, allocate$DTMSafeStringPool);
	return class$;
}

$Class* DTMSafeStringPool::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com