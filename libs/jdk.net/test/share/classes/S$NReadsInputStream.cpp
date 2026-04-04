#include <S$NReadsInputStream.h>
#include <S.h>
#include <java/io/InputStream.h>
#include <java/util/Objects.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef EOF
#undef RANDOM

using $S = ::S;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

void S$NReadsInputStream::init$(int64_t n) {
	$InputStream::init$();
	if (n < 0) {
		$throwNew($IllegalArgumentException, $($String::valueOf(n)));
	}
	this->readsLeft = n;
}

int32_t S$NReadsInputStream::read() {
	if (this->readsLeft == 0) {
		return S$NReadsInputStream::EOF;
	}
	--this->readsLeft;
	return $S::randomIntUpTo(256);
}

int32_t S$NReadsInputStream::read($bytes* b, int32_t off, int32_t len) {
	$Objects::checkFromIndexSize(off, len, $nc(b)->length);
	if (len == 0) {
		return 0;
	}
	if (this->readsLeft == 0) {
		return S$NReadsInputStream::EOF;
	}
	--this->readsLeft;
	$init($S);
	int32_t r = $nc($S::RANDOM)->nextInt(len) + 1;
	for (int32_t i = 0; i < r; ++i) {
		b->set(i, (int8_t)$S::randomIntUpTo(256));
	}
	return r;
}

S$NReadsInputStream::S$NReadsInputStream() {
}

$Class* S$NReadsInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EOF", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(S$NReadsInputStream, EOF)},
		{"readsLeft", "J", nullptr, $PRIVATE, $field(S$NReadsInputStream, readsLeft)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, 0, $method(S$NReadsInputStream, init$, void, int64_t)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(S$NReadsInputStream, read, int32_t)},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(S$NReadsInputStream, read, int32_t, $bytes*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"S$NReadsInputStream", "S", "NReadsInputStream", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"S$NReadsInputStream",
		"java.io.InputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"S"
	};
	$loadClass(S$NReadsInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(S$NReadsInputStream);
	});
	return class$;
}

$Class* S$NReadsInputStream::class$ = nullptr;