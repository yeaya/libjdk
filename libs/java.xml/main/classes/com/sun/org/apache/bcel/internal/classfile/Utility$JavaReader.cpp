#include <com/sun/org/apache/bcel/internal/classfile/Utility$JavaReader.h>

#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <java/io/FilterReader.h>
#include <java/io/Reader.h>
#include <jcpp.h>

#undef MAP_CHAR

using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $FilterReader = ::java::io::FilterReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$MethodInfo _Utility$JavaReader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, $method(Utility$JavaReader, init$, void, $Reader*)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(Utility$JavaReader, read, int32_t), "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(Utility$JavaReader, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _Utility$JavaReader_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.Utility$JavaReader", "com.sun.org.apache.bcel.internal.classfile.Utility", "JavaReader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Utility$JavaReader_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.Utility$JavaReader",
	"java.io.FilterReader",
	nullptr,
	nullptr,
	_Utility$JavaReader_MethodInfo_,
	nullptr,
	nullptr,
	_Utility$JavaReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.Utility"
};

$Object* allocate$Utility$JavaReader($Class* clazz) {
	return $of($alloc(Utility$JavaReader));
}

void Utility$JavaReader::init$($Reader* in) {
	$FilterReader::init$(in);
}

int32_t Utility$JavaReader::read() {
	$useLocalCurrentObjectStackCache();
	int32_t b = $nc(this->in)->read();
	if (b != u'$') {
		return b;
	}
	int32_t i = $nc(this->in)->read();
	if (i < 0) {
		return -1;
	}
	if (((i >= u'0') && (i <= u'9')) || ((i >= u'a') && (i <= u'f'))) {
		int32_t j = $nc(this->in)->read();
		if (j < 0) {
			return -1;
		}
		$var($chars, tmp, $new($chars, {
			(char16_t)i,
			(char16_t)j
		}));
		int32_t s = $Integer::parseInt($$new($String, tmp), 16);
		return s;
	}
	$init($Utility);
	return $nc($Utility::MAP_CHAR)->get(i);
}

int32_t Utility$JavaReader::read($chars* cbuf, int32_t off, int32_t len) {
	for (int32_t i = 0; i < len; ++i) {
		$nc(cbuf)->set(off + i, (char16_t)read());
	}
	return len;
}

Utility$JavaReader::Utility$JavaReader() {
}

$Class* Utility$JavaReader::load$($String* name, bool initialize) {
	$loadClass(Utility$JavaReader, name, initialize, &_Utility$JavaReader_ClassInfo_, allocate$Utility$JavaReader);
	return class$;
}

$Class* Utility$JavaReader::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com