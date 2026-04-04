#include <com/sun/org/apache/bcel/internal/classfile/Utility$JavaWriter.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <java/io/FilterWriter.h>
#include <java/io/Writer.h>
#include <jcpp.h>

#undef CHAR_MAP

using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $FilterWriter = ::java::io::FilterWriter;
using $Writer = ::java::io::Writer;
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

void Utility$JavaWriter::init$($Writer* out) {
	$FilterWriter::init$(out);
}

void Utility$JavaWriter::write(int32_t b) {
	$useLocalObjectStack();
	if ($Utility::isJavaIdentifierPart((char16_t)b) && (b != u'$')) {
		$nc(this->out)->write(b);
	} else {
		$nc(this->out)->write(u'$');
		if (b >= 0 && b < 48) {
			this->out->write($nc($Utility::CHAR_MAP)->get(b));
		} else {
			$var($chars, tmp, $$nc($Integer::toHexString(b))->toCharArray());
			if (tmp->length == 1) {
				this->out->write(u'0');
				this->out->write(tmp->get(0));
			} else {
				this->out->write(tmp->get(0));
				this->out->write(tmp->get(1));
			}
		}
	}
}

void Utility$JavaWriter::write($chars* cbuf, int32_t off, int32_t len) {
	for (int32_t i = 0; i < len; ++i) {
		write($nc(cbuf)->get(off + i));
	}
}

void Utility$JavaWriter::write($String* str, int32_t off, int32_t len) {
	write($($nc(str)->toCharArray()), off, len);
}

Utility$JavaWriter::Utility$JavaWriter() {
}

$Class* Utility$JavaWriter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $method(Utility$JavaWriter, init$, void, $Writer*)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(Utility$JavaWriter, write, void, int32_t), "java.io.IOException"},
		{"write", "([CII)V", nullptr, $PUBLIC, $virtualMethod(Utility$JavaWriter, write, void, $chars*, int32_t, int32_t), "java.io.IOException"},
		{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $virtualMethod(Utility$JavaWriter, write, void, $String*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.bcel.internal.classfile.Utility$JavaWriter", "com.sun.org.apache.bcel.internal.classfile.Utility", "JavaWriter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.bcel.internal.classfile.Utility$JavaWriter",
		"java.io.FilterWriter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.bcel.internal.classfile.Utility"
	};
	$loadClass(Utility$JavaWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Utility$JavaWriter));
	});
	return class$;
}

$Class* Utility$JavaWriter::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com