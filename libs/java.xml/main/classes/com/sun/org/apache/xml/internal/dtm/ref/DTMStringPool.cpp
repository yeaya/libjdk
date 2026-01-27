#include <com/sun/org/apache/xml/internal/dtm/ref/DTMStringPool.h>

#include <com/sun/org/apache/xml/internal/utils/IntVector.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef HASHPRIME
#undef NULL

using $IntVector = ::com::sun::org::apache::xml::internal::utils::IntVector;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMStringPool_FieldInfo_[] = {
	{"m_intToString", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(DTMStringPool, m_intToString)},
	{"HASHPRIME", "I", nullptr, $STATIC | $FINAL, $constField(DTMStringPool, HASHPRIME)},
	{"m_hashStart", "[I", nullptr, 0, $field(DTMStringPool, m_hashStart)},
	{"m_hashChain", "Lcom/sun/org/apache/xml/internal/utils/IntVector;", nullptr, 0, $field(DTMStringPool, m_hashChain)},
	{"NULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMStringPool, NULL)},
	{}
};

$MethodInfo _DTMStringPool_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(DTMStringPool, init$, void, int32_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DTMStringPool, init$, void)},
	{"_main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DTMStringPool, _main, void, $StringArray*)},
	{"indexToString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMStringPool, indexToString, $String*, int32_t), "java.lang.IndexOutOfBoundsException"},
	{"removeAllElements", "()V", nullptr, $PUBLIC, $virtualMethod(DTMStringPool, removeAllElements, void)},
	{"stringToIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DTMStringPool, stringToIndex, int32_t, $String*)},
	{}
};

$ClassInfo _DTMStringPool_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMStringPool",
	"java.lang.Object",
	nullptr,
	_DTMStringPool_FieldInfo_,
	_DTMStringPool_MethodInfo_
};

$Object* allocate$DTMStringPool($Class* clazz) {
	return $of($alloc(DTMStringPool));
}

void DTMStringPool::init$(int32_t chainSize) {
	$set(this, m_hashStart, $new($ints, DTMStringPool::HASHPRIME));
	$set(this, m_intToString, $new($ArrayList));
	$set(this, m_hashChain, $new($IntVector, chainSize));
	removeAllElements();
	stringToIndex(""_s);
}

void DTMStringPool::init$() {
	DTMStringPool::init$(512);
}

void DTMStringPool::removeAllElements() {
	$nc(this->m_intToString)->clear();
	for (int32_t i = 0; i < DTMStringPool::HASHPRIME; ++i) {
		$nc(this->m_hashStart)->set(i, DTMStringPool::NULL);
	}
	$nc(this->m_hashChain)->removeAllElements();
}

$String* DTMStringPool::indexToString(int32_t i) {
	if (i == DTMStringPool::NULL) {
		return nullptr;
	}
	return $cast($String, $nc(this->m_intToString)->get(i));
}

int32_t DTMStringPool::stringToIndex($String* s) {
	$useLocalCurrentObjectStackCache();
	if (s == nullptr) {
		return DTMStringPool::NULL;
	}
	int32_t hashslot = $mod($nc(s)->hashCode(), DTMStringPool::HASHPRIME);
	if (hashslot < 0) {
		hashslot = -hashslot;
	}
	int32_t hashlast = $nc(this->m_hashStart)->get(hashslot);
	int32_t hashcandidate = hashlast;
	while (hashcandidate != DTMStringPool::NULL) {
		if ($nc(($cast($String, $($nc(this->m_intToString)->get(hashcandidate)))))->equals(s)) {
			return hashcandidate;
		}
		hashlast = hashcandidate;
		hashcandidate = $nc(this->m_hashChain)->elementAt(hashcandidate);
	}
	int32_t newIndex = $nc(this->m_intToString)->size();
	$nc(this->m_intToString)->add(s);
	$nc(this->m_hashChain)->addElement(DTMStringPool::NULL);
	if (hashlast == DTMStringPool::NULL) {
		$nc(this->m_hashStart)->set(hashslot, newIndex);
	} else {
		$nc(this->m_hashChain)->setElementAt(newIndex, hashlast);
	}
	return newIndex;
}

void DTMStringPool::_main($StringArray* args) {
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
	$var(DTMStringPool, pool, $new(DTMStringPool));
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

DTMStringPool::DTMStringPool() {
}

$Class* DTMStringPool::load$($String* name, bool initialize) {
	$loadClass(DTMStringPool, name, initialize, &_DTMStringPool_ClassInfo_, allocate$DTMStringPool);
	return class$;
}

$Class* DTMStringPool::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com