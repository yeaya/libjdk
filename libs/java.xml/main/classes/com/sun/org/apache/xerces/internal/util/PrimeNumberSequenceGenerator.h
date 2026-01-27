#ifndef _com_sun_org_apache_xerces_internal_util_PrimeNumberSequenceGenerator_h_
#define _com_sun_org_apache_xerces_internal_util_PrimeNumberSequenceGenerator_h_
//$ class com.sun.org.apache.xerces.internal.util.PrimeNumberSequenceGenerator
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PRIMES")
#undef PRIMES

namespace java {
	namespace util {
		class Random;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class PrimeNumberSequenceGenerator : public ::java::lang::Object {
	$class(PrimeNumberSequenceGenerator, 0, ::java::lang::Object)
public:
	PrimeNumberSequenceGenerator();
	void init$();
	static void generateSequence($ints* arrayToFill);
	static void lambda$generateSequence$0($ints* arrayToFill, ::java::util::Random* r, int32_t i);
	static $ints* PRIMES;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("PRIMES")

#endif // _com_sun_org_apache_xerces_internal_util_PrimeNumberSequenceGenerator_h_