#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ClassFormatException.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariableTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility$1.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility$JavaReader.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility$JavaWriter.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/CharArrayReader.h>
#include <java/io/CharArrayWriter.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/lang/ThreadLocal.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/zip/GZIPInputStream.h>
#include <java/util/zip/GZIPOutputStream.h>
#include <jcpp.h>

#undef ACC_INTERFACE
#undef ACC_SUPER
#undef ALOAD
#undef ANEWARRAY
#undef ASTORE
#undef CHAR_MAP
#undef CHECKCAST
#undef DLOAD
#undef DSTORE
#undef ENGLISH
#undef ESCAPE_CHAR
#undef FLOAD
#undef FREE_CHARS
#undef FSTORE
#undef GETFIELD
#undef GETSTATIC
#undef GOTO
#undef GOTO_W
#undef IFEQ
#undef IFGE
#undef IFGT
#undef IFLE
#undef IFLT
#undef IFNE
#undef IFNONNULL
#undef IFNULL
#undef IF_ACMPEQ
#undef IF_ACMPNE
#undef IF_ICMPEQ
#undef IF_ICMPGE
#undef IF_ICMPGT
#undef IF_ICMPLE
#undef IF_ICMPLT
#undef IF_ICMPNE
#undef IINC
#undef ILOAD
#undef INSTANCEOF
#undef INVOKEDYNAMIC
#undef INVOKEINTERFACE
#undef INVOKESPECIAL
#undef INVOKESTATIC
#undef INVOKEVIRTUAL
#undef ISTORE
#undef JSR
#undef JSR_W
#undef LDC
#undef LDC2_W
#undef LDC_W
#undef LLOAD
#undef LOOKUPSWITCH
#undef LSTORE
#undef MAP_CHAR
#undef MAX_ACC_FLAG_I
#undef MULTIANEWARRAY
#undef NEW
#undef NEWARRAY
#undef OPCODE_NAMES_LENGTH
#undef PUTFIELD
#undef PUTSTATIC
#undef RET
#undef TABLESWITCH
#undef T_ARRAY
#undef T_BOOLEAN
#undef T_BYTE
#undef T_CHAR
#undef T_DOUBLE
#undef T_FLOAT
#undef T_INT
#undef T_LONG
#undef T_REFERENCE
#undef T_SHORT
#undef T_VOID
#undef WIDE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ClassFormatException = ::com::sun::org::apache::bcel::internal::classfile::ClassFormatException;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $LocalVariable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariable;
using $LocalVariableTable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable;
using $Utility$1 = ::com::sun::org::apache::bcel::internal::classfile::Utility$1;
using $Utility$JavaReader = ::com::sun::org::apache::bcel::internal::classfile::Utility$JavaReader;
using $Utility$JavaWriter = ::com::sun::org::apache::bcel::internal::classfile::Utility$JavaWriter;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $CharArrayReader = ::java::io::CharArrayReader;
using $CharArrayWriter = ::java::io::CharArrayWriter;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $GZIPInputStream = ::java::util::zip::GZIPInputStream;
using $GZIPOutputStream = ::java::util::zip::GZIPOutputStream;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _Utility_FieldInfo_[] = {
	{"consumed_chars", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;", $PRIVATE | $STATIC, $staticField(Utility, consumed_chars)},
	{"wide", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Utility, wide)},
	{"FREE_CHARS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Utility, FREE_CHARS)},
	{"CHAR_MAP", "[I", nullptr, $PRIVATE | $STATIC, $staticField(Utility, CHAR_MAP)},
	{"MAP_CHAR", "[I", nullptr, $PRIVATE | $STATIC, $staticField(Utility, MAP_CHAR)},
	{"ESCAPE_CHAR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Utility, ESCAPE_CHAR)},
	{}
};

$MethodInfo _Utility_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Utility, init$, void)},
	{"accessToString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, accessToString, $String*, int32_t)},
	{"accessToString", "(IZ)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, accessToString, $String*, int32_t, bool)},
	{"byteToShort", "(B)S", nullptr, $PRIVATE | $STATIC, $staticMethod(Utility, byteToShort, int16_t, int8_t)},
	{"classOrInterface", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, classOrInterface, $String*, int32_t)},
	{"clearBit", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, clearBit, int32_t, int32_t, int32_t)},
	{"codeToString", "([BLcom/sun/org/apache/bcel/internal/classfile/ConstantPool;IIZ)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, codeToString, $String*, $bytes*, $ConstantPool*, int32_t, int32_t, bool)},
	{"codeToString", "([BLcom/sun/org/apache/bcel/internal/classfile/ConstantPool;II)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, codeToString, $String*, $bytes*, $ConstantPool*, int32_t, int32_t)},
	{"codeToString", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;Z)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, codeToString, $String*, $ByteSequence*, $ConstantPool*, bool), "java.io.IOException"},
	{"codeToString", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, codeToString, $String*, $ByteSequence*, $ConstantPool*), "java.io.IOException"},
	{"compactClassName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, compactClassName, $String*, $String*)},
	{"compactClassName", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, compactClassName, $String*, $String*, bool)},
	{"compactClassName", "(Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, compactClassName, $String*, $String*, $String*, bool)},
	{"convertString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, convertString, $String*, $String*)},
	{"countBrackets", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Utility, countBrackets, int32_t, $String*)},
	{"decode", "(Ljava/lang/String;Z)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, decode, $bytes*, $String*, bool), "java.io.IOException"},
	{"encode", "([BZ)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, encode, $String*, $bytes*, bool), "java.io.IOException"},
	{"equals", "([B[B)Z", nullptr, $STATIC, $staticMethod(Utility, equals, bool, $bytes*, $bytes*)},
	{"fillup", "(Ljava/lang/String;IZC)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, fillup, $String*, $String*, int32_t, bool, char16_t)},
	{"format", "(IIZC)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, format, $String*, int32_t, int32_t, bool, char16_t)},
	{"getSignature", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, getSignature, $String*, $String*)},
	{"isJavaIdentifierPart", "(C)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, isJavaIdentifierPart, bool, char16_t)},
	{"isSet", "(II)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, isSet, bool, int32_t, int32_t)},
	{"methodSignatureArgumentTypes", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, methodSignatureArgumentTypes, $StringArray*, $String*), "com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"methodSignatureArgumentTypes", "(Ljava/lang/String;Z)[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, methodSignatureArgumentTypes, $StringArray*, $String*, bool), "com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"methodSignatureReturnType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, methodSignatureReturnType, $String*, $String*), "com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"methodSignatureReturnType", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, methodSignatureReturnType, $String*, $String*, bool), "com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"methodSignatureToString", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, methodSignatureToString, $String*, $String*, $String*, $String*)},
	{"methodSignatureToString", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, methodSignatureToString, $String*, $String*, $String*, $String*, bool)},
	{"methodSignatureToString", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/sun/org/apache/bcel/internal/classfile/LocalVariableTable;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, methodSignatureToString, $String*, $String*, $String*, $String*, bool, $LocalVariableTable*), "com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"methodTypeToSignature", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, methodTypeToSignature, $String*, $String*, $StringArray*), "com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"pow2", "(I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Utility, pow2, int32_t, int32_t)},
	{"printArray", "(Ljava/io/PrintStream;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, printArray, void, $PrintStream*, $ObjectArray*)},
	{"printArray", "(Ljava/io/PrintWriter;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, printArray, void, $PrintWriter*, $ObjectArray*)},
	{"printArray", "([Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, printArray, $String*, $ObjectArray*)},
	{"printArray", "([Ljava/lang/Object;Z)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, printArray, $String*, $ObjectArray*, bool)},
	{"printArray", "([Ljava/lang/Object;ZZ)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, printArray, $String*, $ObjectArray*, bool, bool)},
	{"replace", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, replace, $String*, $String*, $String*, $String*)},
	{"searchOpcode", "(Ljava/lang/String;)S", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, searchOpcode, int16_t, $String*)},
	{"setBit", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, setBit, int32_t, int32_t, int32_t)},
	{"signatureToString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, signatureToString, $String*, $String*)},
	{"signatureToString", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, signatureToString, $String*, $String*, bool)},
	{"toHexString", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, toHexString, $String*, $bytes*)},
	{"typeOfMethodSignature", "(Ljava/lang/String;)B", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, typeOfMethodSignature, int8_t, $String*), "com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"typeOfSignature", "(Ljava/lang/String;)B", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, typeOfSignature, int8_t, $String*), "com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"typeParamTypeToString", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Utility, typeParamTypeToString, $String*, $String*, bool)},
	{"typeParamTypesToString", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Utility, typeParamTypesToString, $String*, $String*, bool)},
	{"typeSignatureToString", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utility, typeSignatureToString, $String*, $String*, bool), "com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"typeSignaturesToString", "(Ljava/lang/String;ZC)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Utility, typeSignaturesToString, $String*, $String*, bool, char16_t)},
	{"unwrap", "(Ljava/lang/ThreadLocal;)I", "(Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;)I", $PRIVATE | $STATIC, $staticMethod(Utility, unwrap, int32_t, $ThreadLocal*)},
	{"wrap", "(Ljava/lang/ThreadLocal;I)V", "(Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;I)V", $PRIVATE | $STATIC, $staticMethod(Utility, wrap, void, $ThreadLocal*, int32_t)},
	{}
};

$InnerClassInfo _Utility_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.Utility$JavaWriter", "com.sun.org.apache.bcel.internal.classfile.Utility", "JavaWriter", $PRIVATE | $STATIC},
	{"com.sun.org.apache.bcel.internal.classfile.Utility$JavaReader", "com.sun.org.apache.bcel.internal.classfile.Utility", "JavaReader", $PRIVATE | $STATIC},
	{"com.sun.org.apache.bcel.internal.classfile.Utility$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Utility_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.Utility",
	"java.lang.Object",
	nullptr,
	_Utility_FieldInfo_,
	_Utility_MethodInfo_,
	nullptr,
	nullptr,
	_Utility_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.Utility$JavaWriter,com.sun.org.apache.bcel.internal.classfile.Utility$JavaReader,com.sun.org.apache.bcel.internal.classfile.Utility$1"
};

$Object* allocate$Utility($Class* clazz) {
	return $of($alloc(Utility));
}

$ThreadLocal* Utility::consumed_chars = nullptr;
bool Utility::wide = false;
$ints* Utility::CHAR_MAP = nullptr;
$ints* Utility::MAP_CHAR = nullptr;

void Utility::init$() {
}

int32_t Utility::unwrap($ThreadLocal* tl) {
	$init(Utility);
	return $nc(($cast($Integer, $($nc(tl)->get()))))->intValue();
}

void Utility::wrap($ThreadLocal* tl, int32_t value) {
	$init(Utility);
	$nc(tl)->set($($Integer::valueOf(value)));
}

$String* Utility::accessToString(int32_t access_flags) {
	$init(Utility);
	return accessToString(access_flags, false);
}

$String* Utility::accessToString(int32_t access_flags, bool for_class) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	int32_t p = 0;
	for (int32_t i = 0; p < $Const::MAX_ACC_FLAG_I; ++i) {
		p = pow2(i);
		if (((int32_t)(access_flags & (uint32_t)p)) != 0) {
			if (for_class && ((p == $Const::ACC_SUPER) || (p == $Const::ACC_INTERFACE))) {
				continue;
			}
			buf->append($($Const::getAccessName(i)))->append(" "_s);
		}
	}
	return $nc($(buf->toString()))->trim();
}

$String* Utility::classOrInterface(int32_t access_flags) {
	$init(Utility);
	return (((int32_t)(access_flags & (uint32_t)(int32_t)$Const::ACC_INTERFACE)) != 0) ? "interface"_s : "class"_s;
}

$String* Utility::codeToString($bytes* code, $ConstantPool* constant_pool, int32_t index, int32_t length, bool verbose) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder, $nc(code)->length * 20));
	try {
		$var($ByteSequence, stream, $new($ByteSequence, code));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					for (int32_t i = 0; i < index; ++i) {
						codeToString(stream, constant_pool, verbose);
					}
					for (int32_t i = 0; stream->available() > 0; ++i) {
						if ((length < 0) || (i < length)) {
							$var($String, indices, fillup($$str({$$str(stream->getIndex()), ":"_s}), 6, true, u' '));
							buf->append(indices)->append($(codeToString(stream, constant_pool, verbose)))->append(u'\n');
						}
					}
				} catch ($Throwable& t$) {
					try {
						stream->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				stream->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IOException& e) {
		$throwNew($ClassFormatException, $$str({"Byte code error: "_s, $(buf->toString())}), e);
	}
	return buf->toString();
}

$String* Utility::codeToString($bytes* code, $ConstantPool* constant_pool, int32_t index, int32_t length) {
	$init(Utility);
	return codeToString(code, constant_pool, index, length, true);
}

$String* Utility::codeToString($ByteSequence* bytes, $ConstantPool* constant_pool, bool verbose) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	int16_t opcode = (int16_t)$nc(bytes)->readUnsignedByte();
	int32_t default_offset = 0;
	int32_t low = 0;
	int32_t high = 0;
	int32_t npairs = 0;
	int32_t index = 0;
	int32_t vindex = 0;
	int32_t constant = 0;
	$var($ints, match, nullptr);
	$var($ints, jump_table, nullptr);
	int32_t no_pad_bytes = 0;
	int32_t offset = 0;
	$var($StringBuilder, buf, $new($StringBuilder, $($Const::getOpcodeName(opcode))));
	if ((opcode == $Const::TABLESWITCH) || (opcode == $Const::LOOKUPSWITCH)) {
		int32_t remainder = bytes->getIndex() % 4;
		no_pad_bytes = (remainder == 0) ? 0 : 4 - remainder;
		for (int32_t i = 0; i < no_pad_bytes; ++i) {
			int8_t b = 0;
			if ((b = bytes->readByte()) != 0) {
				$nc($System::err)->println($$str({"Warning: Padding byte != 0 in "_s, $($Const::getOpcodeName(opcode)), ":"_s, $$str(b)}));
			}
		}
		default_offset = bytes->readInt();
	}
	{
		$var($Constant, c, nullptr)
		int32_t nargs = 0;
		switch (opcode) {
		case $Const::TABLESWITCH:
			{
				low = bytes->readInt();
				high = bytes->readInt();
				offset = bytes->getIndex() - 12 - no_pad_bytes - 1;
				default_offset += offset;
				buf->append("\tdefault = "_s)->append(default_offset)->append(", low = "_s)->append(low)->append(", high = "_s)->append(high)->append("("_s);
				$assign(jump_table, $new($ints, high - low + 1));
				for (int32_t i = 0; i < $nc(jump_table)->length; ++i) {
					jump_table->set(i, offset + bytes->readInt());
					buf->append(jump_table->get(i));
					if (i < jump_table->length - 1) {
						buf->append(", "_s);
					}
				}
				buf->append(")"_s);
				break;
			}
		case $Const::LOOKUPSWITCH:
			{
				{
					npairs = bytes->readInt();
					offset = bytes->getIndex() - 8 - no_pad_bytes - 1;
					$assign(match, $new($ints, npairs));
					$assign(jump_table, $new($ints, npairs));
					default_offset += offset;
					buf->append("\tdefault = "_s)->append(default_offset)->append(", npairs = "_s)->append(npairs)->append(" ("_s);
					for (int32_t i = 0; i < npairs; ++i) {
						match->set(i, bytes->readInt());
						jump_table->set(i, offset + bytes->readInt());
						buf->append("("_s)->append(match->get(i))->append(", "_s)->append(jump_table->get(i))->append(")"_s);
						if (i < npairs - 1) {
							buf->append(", "_s);
						}
					}
					buf->append(")"_s);
				}
				break;
			}
		case $Const::GOTO:
			{}
		case $Const::IFEQ:
			{}
		case $Const::IFGE:
			{}
		case $Const::IFGT:
			{}
		case $Const::IFLE:
			{}
		case $Const::IFLT:
			{}
		case $Const::JSR:
			{}
		case $Const::IFNE:
			{}
		case $Const::IFNONNULL:
			{}
		case $Const::IFNULL:
			{}
		case $Const::IF_ACMPEQ:
			{}
		case $Const::IF_ACMPNE:
			{}
		case $Const::IF_ICMPEQ:
			{}
		case $Const::IF_ICMPGE:
			{}
		case $Const::IF_ICMPGT:
			{}
		case $Const::IF_ICMPLE:
			{}
		case $Const::IF_ICMPLT:
			{}
		case $Const::IF_ICMPNE:
			{
				int32_t var$0 = (bytes->getIndex() - 1);
				buf->append("\t\t#"_s)->append(var$0 + bytes->readShort());
				break;
			}
		case $Const::GOTO_W:
			{}
		case $Const::JSR_W:
			{
				int32_t var$1 = (bytes->getIndex() - 1);
				buf->append("\t\t#"_s)->append(var$1 + bytes->readInt());
				break;
			}
		case $Const::ALOAD:
			{}
		case $Const::ASTORE:
			{}
		case $Const::DLOAD:
			{}
		case $Const::DSTORE:
			{}
		case $Const::FLOAD:
			{}
		case $Const::FSTORE:
			{}
		case $Const::ILOAD:
			{}
		case $Const::ISTORE:
			{}
		case $Const::LLOAD:
			{}
		case $Const::LSTORE:
			{}
		case $Const::RET:
			{
				if (Utility::wide) {
					vindex = bytes->readUnsignedShort();
					Utility::wide = false;
				} else {
					vindex = bytes->readUnsignedByte();
				}
				buf->append("\t\t%"_s)->append(vindex);
				break;
			}
		case $Const::WIDE:
			{
				Utility::wide = true;
				buf->append("\t(wide)"_s);
				break;
			}
		case $Const::NEWARRAY:
			{
				buf->append("\t\t<"_s)->append($($Const::getTypeName(bytes->readByte())))->append(">"_s);
				break;
			}
		case $Const::GETFIELD:
			{}
		case $Const::GETSTATIC:
			{}
		case $Const::PUTFIELD:
			{}
		case $Const::PUTSTATIC:
			{
				index = bytes->readUnsignedShort();
				buf->append("\t\t"_s)->append($($nc(constant_pool)->constantToString(index, $Const::CONSTANT_Fieldref)))->append(verbose ? $$str({" ("_s, $$str(index), ")"_s}) : ""_s);
				break;
			}
		case $Const::NEW:
			{}
		case $Const::CHECKCAST:
			{
				buf->append("\t"_s);
			}
		case $Const::INSTANCEOF:
			{
				index = bytes->readUnsignedShort();
				buf->append("\t<"_s)->append($($nc(constant_pool)->constantToString(index, $Const::CONSTANT_Class)))->append(">"_s)->append(verbose ? $$str({" ("_s, $$str(index), ")"_s}) : ""_s);
				break;
			}
		case $Const::INVOKESPECIAL:
			{}
		case $Const::INVOKESTATIC:
			{
				index = bytes->readUnsignedShort();
				$assign(c, $nc(constant_pool)->getConstant(index));
				buf->append("\t"_s)->append($(constant_pool->constantToString(index, $nc(c)->getTag())))->append(verbose ? $$str({" ("_s, $$str(index), ")"_s}) : ""_s);
				break;
			}
		case $Const::INVOKEVIRTUAL:
			{
				index = bytes->readUnsignedShort();
				buf->append("\t"_s)->append($(constant_pool->constantToString(index, $Const::CONSTANT_Methodref)))->append(verbose ? $$str({" ("_s, $$str(index), ")"_s}) : ""_s);
				break;
			}
		case $Const::INVOKEINTERFACE:
			{
				index = bytes->readUnsignedShort();
				nargs = bytes->readUnsignedByte();
				buf->append("\t"_s)->append($(constant_pool->constantToString(index, $Const::CONSTANT_InterfaceMethodref)))->append(verbose ? $$str({" ("_s, $$str(index), ")\t"_s}) : ""_s)->append(nargs)->append("\t"_s)->append(bytes->readUnsignedByte());
				break;
			}
		case $Const::INVOKEDYNAMIC:
			{
				index = bytes->readUnsignedShort();
				buf->append("\t"_s)->append($(constant_pool->constantToString(index, $Const::CONSTANT_InvokeDynamic)))->append(verbose ? $$str({" ("_s, $$str(index), ")\t"_s}) : ""_s)->append(bytes->readUnsignedByte())->append(bytes->readUnsignedByte());
				break;
			}
		case $Const::LDC_W:
			{}
		case $Const::LDC2_W:
			{
				index = bytes->readUnsignedShort();
				buf->append("\t\t"_s)->append($(constant_pool->constantToString(index, $nc($(constant_pool->getConstant(index)))->getTag())))->append(verbose ? $$str({" ("_s, $$str(index), ")"_s}) : ""_s);
				break;
			}
		case $Const::LDC:
			{
				index = bytes->readUnsignedByte();
				buf->append("\t\t"_s)->append($(constant_pool->constantToString(index, $nc($(constant_pool->getConstant(index)))->getTag())))->append(verbose ? $$str({" ("_s, $$str(index), ")"_s}) : ""_s);
				break;
			}
		case $Const::ANEWARRAY:
			{
				index = bytes->readUnsignedShort();
				buf->append("\t\t<"_s)->append($(compactClassName($(constant_pool->getConstantString(index, $Const::CONSTANT_Class)), false)))->append(">"_s)->append(verbose ? $$str({" ("_s, $$str(index), ")"_s}) : ""_s);
				break;
			}
		case $Const::MULTIANEWARRAY:
			{
				{
					index = bytes->readUnsignedShort();
					int32_t dimensions = bytes->readUnsignedByte();
					buf->append("\t<"_s)->append($(compactClassName($(constant_pool->getConstantString(index, $Const::CONSTANT_Class)), false)))->append(">\t"_s)->append(dimensions)->append(verbose ? $$str({" ("_s, $$str(index), ")"_s}) : ""_s);
				}
				break;
			}
		case $Const::IINC:
			{
				if (Utility::wide) {
					vindex = bytes->readUnsignedShort();
					constant = bytes->readShort();
					Utility::wide = false;
				} else {
					vindex = bytes->readUnsignedByte();
					constant = bytes->readByte();
				}
				buf->append("\t\t%"_s)->append(vindex)->append("\t"_s)->append(constant);
				break;
			}
		default:
			{
				if ($Const::getNoOfOperands(opcode) > 0) {
					for (int32_t i = 0; i < $Const::getOperandTypeCount(opcode); ++i) {
						buf->append("\t\t"_s);
						switch ($Const::getOperandType(opcode, i)) {
						case $Const::T_BYTE:
							{
								buf->append((int32_t)bytes->readByte());
								break;
							}
						case $Const::T_SHORT:
							{
								buf->append((int32_t)bytes->readShort());
								break;
							}
						case $Const::T_INT:
							{
								buf->append(bytes->readInt());
								break;
							}
						default:
							{
								$throwNew($IllegalStateException, "Unreachable default case reached!"_s);
							}
						}
					}
				}
			}
		}
	}
	return buf->toString();
}

$String* Utility::codeToString($ByteSequence* bytes, $ConstantPool* constant_pool) {
	$init(Utility);
	return codeToString(bytes, constant_pool, true);
}

$String* Utility::compactClassName($String* str) {
	$init(Utility);
	return compactClassName(str, true);
}

$String* Utility::compactClassName($String* str, bool chopit) {
	$init(Utility);
	return compactClassName(str, "java.lang."_s, chopit);
}

$String* Utility::compactClassName($String* str$renamed, $String* prefix, bool chopit) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($String, str, str$renamed);
	int32_t len = $nc(prefix)->length();
	$assign(str, $nc(str)->replace(u'/', u'.'));
	if (chopit) {
		bool var$0 = str->startsWith(prefix);
		if (var$0 && ($(str->substring(len))->indexOf((int32_t)u'.') == -1)) {
			$assign(str, str->substring(len));
		}
	}
	return str;
}

int32_t Utility::setBit(int32_t flag, int32_t i) {
	$init(Utility);
	return flag | pow2(i);
}

int32_t Utility::clearBit(int32_t flag, int32_t i) {
	$init(Utility);
	int32_t bit = pow2(i);
	return ((int32_t)(flag & (uint32_t)bit)) == 0 ? flag : flag ^ bit;
}

bool Utility::isSet(int32_t flag, int32_t i) {
	$init(Utility);
	return ((int32_t)(flag & (uint32_t)pow2(i))) != 0;
}

$String* Utility::methodTypeToSignature($String* ret, $StringArray* argv) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder, "("_s));
	$var($String, str, nullptr);
	if (argv != nullptr) {
		{
			$var($StringArray, arr$, argv);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, element, arr$->get(i$));
				{
					$assign(str, getSignature(element));
					if ($nc(str)->endsWith("V"_s)) {
						$throwNew($ClassFormatException, $$str({"Invalid type: "_s, element}));
					}
					buf->append(str);
				}
			}
		}
	}
	$assign(str, getSignature(ret));
	buf->append(")"_s)->append(str);
	return buf->toString();
}

$StringArray* Utility::methodSignatureArgumentTypes($String* signature) {
	$init(Utility);
	return methodSignatureArgumentTypes(signature, true);
}

$StringArray* Utility::methodSignatureArgumentTypes($String* signature, bool chopit) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($List, vec, $new($ArrayList));
	int32_t index = 0;
	try {
		index = $nc(signature)->indexOf((int32_t)u'(') + 1;
		if (index <= 0) {
			$throwNew($ClassFormatException, $$str({"Invalid method signature: "_s, signature}));
		}
		while (signature->charAt(index) != u')') {
			vec->add($(typeSignatureToString($(signature->substring(index)), chopit)));
			index += unwrap(Utility::consumed_chars);
		}
	} catch ($StringIndexOutOfBoundsException& e) {
		$throwNew($ClassFormatException, $$str({"Invalid method signature: "_s, signature}), e);
	}
	return $fcast($StringArray, vec->toArray($$new($StringArray, vec->size())));
}

$String* Utility::methodSignatureReturnType($String* signature) {
	$init(Utility);
	return methodSignatureReturnType(signature, true);
}

$String* Utility::methodSignatureReturnType($String* signature, bool chopit) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	$var($String, type, nullptr);
	try {
		index = $nc(signature)->lastIndexOf((int32_t)u')') + 1;
		if (index <= 0) {
			$throwNew($ClassFormatException, $$str({"Invalid method signature: "_s, signature}));
		}
		$assign(type, typeSignatureToString($(signature->substring(index)), chopit));
	} catch ($StringIndexOutOfBoundsException& e) {
		$throwNew($ClassFormatException, $$str({"Invalid method signature: "_s, signature}), e);
	}
	return type;
}

$String* Utility::methodSignatureToString($String* signature, $String* name, $String* access) {
	$init(Utility);
	return methodSignatureToString(signature, name, access, true);
}

$String* Utility::methodSignatureToString($String* signature, $String* name, $String* access, bool chopit) {
	$init(Utility);
	return methodSignatureToString(signature, name, access, chopit, nullptr);
}

$String* Utility::methodSignatureToString($String* signature, $String* name, $String* access, bool chopit, $LocalVariableTable* vars) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder, "("_s));
	$var($String, type, nullptr);
	int32_t index = 0;
	int32_t var_index = $nc(access)->contains("static"_s) ? 0 : 1;
	try {
		index = $nc(signature)->indexOf((int32_t)u'(') + 1;
		if (index <= 0) {
			$throwNew($ClassFormatException, $$str({"Invalid method signature: "_s, signature}));
		}
		while (signature->charAt(index) != u')') {
			$var($String, param_type, typeSignatureToString($(signature->substring(index)), chopit));
			buf->append(param_type);
			if (vars != nullptr) {
				$var($LocalVariable, l, vars->getLocalVariable(var_index, 0));
				if (l != nullptr) {
					buf->append(" "_s)->append($(l->getName()));
				}
			} else {
				buf->append(" arg"_s)->append(var_index);
			}
			bool var$0 = "double"_s->equals(param_type);
			if (var$0 || "long"_s->equals(param_type)) {
				var_index += 2;
			} else {
				++var_index;
			}
			buf->append(", "_s);
			index += unwrap(Utility::consumed_chars);
		}
		++index;
		$assign(type, typeSignatureToString($(signature->substring(index)), chopit));
	} catch ($StringIndexOutOfBoundsException& e) {
		$throwNew($ClassFormatException, $$str({"Invalid method signature: "_s, signature}), e);
	}
	if (buf->length() > 1) {
		buf->setLength(buf->length() - 2);
	}
	buf->append(")"_s);
	$var($String, var$1, $$str({access, (($nc(access)->length() > 0) ? " "_s : ""_s), type, " "_s, name}));
	return $concat(var$1, $(buf->toString()));
}

int32_t Utility::pow2(int32_t n) {
	$init(Utility);
	return $sl(1, n);
}

$String* Utility::replace($String* str$renamed, $String* old, $String* new_) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($String, str, str$renamed);
	int32_t index = 0;
	int32_t old_index = 0;
	try {
		if ($nc(str)->contains(old)) {
			$var($StringBuilder, buf, $new($StringBuilder));
			old_index = 0;
			while ((index = str->indexOf(old, old_index)) != -1) {
				buf->append($(str->substring(old_index, index)));
				buf->append(new_);
				old_index = index + $nc(old)->length();
			}
			buf->append($(str->substring(old_index)));
			$assign(str, buf->toString());
		}
	} catch ($StringIndexOutOfBoundsException& e) {
		$nc($System::err)->println($of(e));
	}
	return str;
}

$String* Utility::signatureToString($String* signature) {
	$init(Utility);
	return signatureToString(signature, true);
}

$String* Utility::signatureToString($String* signature, bool chopit) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($String, type, ""_s);
	$var($String, typeParams, ""_s);
	int32_t index = 0;
	if ($nc(signature)->charAt(0) == u'<') {
		$assign(typeParams, typeParamTypesToString(signature, chopit));
		index += unwrap(Utility::consumed_chars);
	}
	if ($nc(signature)->charAt(index) == u'(') {
		$assign(type, $str({typeParams, $(typeSignaturesToString($(signature->substring(index)), chopit, u')'))}));
		index += unwrap(Utility::consumed_chars);
		$assign(type, $str({type, $(typeSignatureToString($(signature->substring(index)), chopit))}));
		index += unwrap(Utility::consumed_chars);
		return type;
	}
	$assign(type, typeSignatureToString($($nc(signature)->substring(index)), chopit));
	index += unwrap(Utility::consumed_chars);
	bool var$0 = (typeParams->length() == 0);
	if (var$0 && (index == $nc(signature)->length())) {
		return type;
	}
	$var($StringBuilder, typeClass, $new($StringBuilder, typeParams));
	typeClass->append(" extends "_s);
	typeClass->append(type);
	if (index < $nc(signature)->length()) {
		typeClass->append(" implements "_s);
		typeClass->append($(typeSignatureToString($(signature->substring(index)), chopit)));
		index += unwrap(Utility::consumed_chars);
	}
	while (index < $nc(signature)->length()) {
		typeClass->append(", "_s);
		typeClass->append($(typeSignatureToString($(signature->substring(index)), chopit)));
		index += unwrap(Utility::consumed_chars);
	}
	return typeClass->toString();
}

$String* Utility::typeParamTypesToString($String* signature, bool chopit) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, typeParams, $new($StringBuilder, "<"_s));
	int32_t index = 1;
	typeParams->append($(typeParamTypeToString($($nc(signature)->substring(index)), chopit)));
	index += unwrap(Utility::consumed_chars);
	while ($nc(signature)->charAt(index) != u'>') {
		typeParams->append(", "_s);
		typeParams->append($(typeParamTypeToString($(signature->substring(index)), chopit)));
		index += unwrap(Utility::consumed_chars);
	}
	wrap(Utility::consumed_chars, index + 1);
	return typeParams->append(">"_s)->toString();
}

$String* Utility::typeParamTypeToString($String* signature, bool chopit) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	int32_t index = $nc(signature)->indexOf((int32_t)u':');
	if (index <= 0) {
		$throwNew($ClassFormatException, $$str({"Invalid type parameter signature: "_s, signature}));
	}
	$var($StringBuilder, typeParam, $new($StringBuilder, $(signature->substring(0, index))));
	++index;
	if (signature->charAt(index) != u':') {
		typeParam->append(" extends "_s);
		typeParam->append($(typeSignatureToString($(signature->substring(index)), chopit)));
		index += unwrap(Utility::consumed_chars);
	}
	while (signature->charAt(index) == u':') {
		++index;
		typeParam->append(" & "_s);
		typeParam->append($(typeSignatureToString($(signature->substring(index)), chopit)));
		index += unwrap(Utility::consumed_chars);
	}
	wrap(Utility::consumed_chars, index);
	return typeParam->toString();
}

$String* Utility::typeSignaturesToString($String* signature, bool chopit, char16_t term) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, typeList, $new($StringBuilder, $($nc(signature)->substring(0, 1))));
	int32_t index = 1;
	if ($nc(signature)->charAt(index) != term) {
		typeList->append($(typeSignatureToString($(signature->substring(index)), chopit)));
		index += unwrap(Utility::consumed_chars);
	}
	while ($nc(signature)->charAt(index) != term) {
		typeList->append(", "_s);
		typeList->append($(typeSignatureToString($(signature->substring(index)), chopit)));
		index += unwrap(Utility::consumed_chars);
	}
	wrap(Utility::consumed_chars, index + 1);
	return typeList->append(term)->toString();
}

$String* Utility::typeSignatureToString($String* signature, bool chopit) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	wrap(Utility::consumed_chars, 1);
	try {
		switch ($nc(signature)->charAt(0)) {
		case u'B':
			{
				return "byte"_s;
			}
		case u'C':
			{
				return "char"_s;
			}
		case u'D':
			{
				return "double"_s;
			}
		case u'F':
			{
				return "float"_s;
			}
		case u'I':
			{
				return "int"_s;
			}
		case u'J':
			{
				return "long"_s;
			}
		case u'T':
			{
				{
					int32_t index = signature->indexOf((int32_t)u';');
					if (index < 0) {
						$throwNew($ClassFormatException, $$str({"Invalid type variable signature: "_s, signature}));
					}
					wrap(Utility::consumed_chars, index + 1);
					return compactClassName($(signature->substring(1, index)), chopit);
				}
			}
		case u'L':
			{
				{
					int32_t fromIndex = signature->indexOf((int32_t)u'<');
					if (fromIndex < 0) {
						fromIndex = 0;
					} else {
						fromIndex = signature->indexOf((int32_t)u'>', fromIndex);
						if (fromIndex < 0) {
							$throwNew($ClassFormatException, $$str({"Invalid signature: "_s, signature}));
						}
					}
					int32_t index = signature->indexOf((int32_t)u';', fromIndex);
					if (index < 0) {
						$throwNew($ClassFormatException, $$str({"Invalid signature: "_s, signature}));
					}
					int32_t bracketIndex = $(signature->substring(0, index))->indexOf((int32_t)u'<');
					if (bracketIndex < 0) {
						wrap(Utility::consumed_chars, index + 1);
						return compactClassName($(signature->substring(1, index)), chopit);
					}
					fromIndex = signature->indexOf((int32_t)u';');
					if (fromIndex < 0) {
						$throwNew($ClassFormatException, $$str({"Invalid signature: "_s, signature}));
					}
					if (fromIndex < bracketIndex) {
						wrap(Utility::consumed_chars, fromIndex + 1);
						return compactClassName($(signature->substring(1, fromIndex)), chopit);
					}
					$var($StringBuilder, type, $$new($StringBuilder, $(compactClassName($(signature->substring(1, bracketIndex)), chopit)))->append("<"_s));
					int32_t consumed_chars = bracketIndex + 1;
					if (signature->charAt(consumed_chars) == u'+') {
						type->append("? extends "_s);
						++consumed_chars;
					} else if (signature->charAt(consumed_chars) == u'-') {
						type->append("? super "_s);
						++consumed_chars;
					}
					if (signature->charAt(consumed_chars) == u'*') {
						type->append("?"_s);
						++consumed_chars;
					} else {
						type->append($(typeSignatureToString($(signature->substring(consumed_chars)), chopit)));
						consumed_chars = unwrap(Utility::consumed_chars) + consumed_chars;
						wrap(Utility::consumed_chars, consumed_chars);
					}
					while (signature->charAt(consumed_chars) != u'>') {
						type->append(", "_s);
						if (signature->charAt(consumed_chars) == u'+') {
							type->append("? extends "_s);
							++consumed_chars;
						} else if (signature->charAt(consumed_chars) == u'-') {
							type->append("? super "_s);
							++consumed_chars;
						}
						if (signature->charAt(consumed_chars) == u'*') {
							type->append("?"_s);
							++consumed_chars;
						} else {
							type->append($(typeSignatureToString($(signature->substring(consumed_chars)), chopit)));
							consumed_chars = unwrap(Utility::consumed_chars) + consumed_chars;
							wrap(Utility::consumed_chars, consumed_chars);
						}
					}
					++consumed_chars;
					type->append(">"_s);
					if (signature->charAt(consumed_chars) == u'.') {
						type->append("."_s);
						type->append($(typeSignatureToString($$str({"L"_s, $(signature->substring(consumed_chars + 1))}), chopit)));
						consumed_chars = unwrap(Utility::consumed_chars) + consumed_chars;
						wrap(Utility::consumed_chars, consumed_chars);
						return type->toString();
					}
					if (signature->charAt(consumed_chars) != u';') {
						$throwNew($ClassFormatException, $$str({"Invalid signature: "_s, signature}));
					}
					wrap(Utility::consumed_chars, consumed_chars + 1);
					return type->toString();
				}
			}
		case u'S':
			{
				return "short"_s;
			}
		case u'Z':
			{
				return "boolean"_s;
			}
		case u'[':
			{
				{
					int32_t n = 0;
					$var($StringBuilder, brackets, nullptr);
					$var($String, type, nullptr);
					int32_t consumed_chars = 0;
					$assign(brackets, $new($StringBuilder));
					for (n = 0; signature->charAt(n) == u'['; ++n) {
						brackets->append("[]"_s);
					}
					consumed_chars = n;
					$assign(type, typeSignatureToString($(signature->substring(n)), chopit));
					int32_t _temp = unwrap(Utility::consumed_chars) + consumed_chars;
					wrap(Utility::consumed_chars, _temp);
					return $str({type, $(brackets->toString())});
				}
			}
		case u'V':
			{
				return "void"_s;
			}
		default:
			{
				$throwNew($ClassFormatException, $$str({"Invalid signature: `"_s, signature, "\'"_s}));
			}
		}
	} catch ($StringIndexOutOfBoundsException& e) {
		$throwNew($ClassFormatException, $$str({"Invalid signature: "_s, signature}), e);
	}
	$shouldNotReachHere();
}

$String* Utility::getSignature($String* type$renamed) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($String, type, type$renamed);
	$var($StringBuilder, buf, $new($StringBuilder));
	$var($chars, chars, $nc(type)->toCharArray());
	bool char_found = false;
	bool delim = false;
	int32_t index = -1;
	bool loop$break = false;
	for (int32_t i = 0; i < chars->length; ++i) {
		switch (chars->get(i)) {
		case u' ':
			{}
		case u'\t':
			{}
		case u'\n':
			{}
		case u'\r':
			{}
		case u'\f':
			{
				if (char_found) {
					delim = true;
				}
				break;
			}
		case u'[':
			{
				if (!char_found) {
					$throwNew($IllegalArgumentException, $$str({"Illegal type: "_s, type}));
				}
				index = i;
				loop$break = true;
				break;
			}
		default:
			{
				char_found = true;
				if (!delim) {
					buf->append(chars->get(i));
				}
			}
		}

		if (loop$break) {
			break;
		}	}
	int32_t brackets = 0;
	if (index > 0) {
		brackets = countBrackets($(type->substring(index)));
	}
	$assign(type, buf->toString());
	buf->setLength(0);
	for (int32_t i = 0; i < brackets; ++i) {
		buf->append(u'[');
	}
	bool found = false;
	for (int32_t i = $Const::T_BOOLEAN; (i <= $Const::T_VOID) && !found; ++i) {
		if ($nc($($Const::getTypeName(i)))->equals(type)) {
			found = true;
			buf->append($($Const::getShortTypeName(i)));
		}
	}
	if (!found) {
		buf->append(u'L')->append($(type->replace(u'.', u'/')))->append(u';');
	}
	return buf->toString();
}

int32_t Utility::countBrackets($String* brackets) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($chars, chars, $nc(brackets)->toCharArray());
	int32_t count = 0;
	bool open = false;
	{
		$var($chars, arr$, chars);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			char16_t c = arr$->get(i$);
			{
				switch (c) {
				case u'[':
					{
						if (open) {
							$throwNew($IllegalArgumentException, $$str({"Illegally nested brackets:"_s, brackets}));
						}
						open = true;
						break;
					}
				case u']':
					{
						if (!open) {
							$throwNew($IllegalArgumentException, $$str({"Illegally nested brackets:"_s, brackets}));
						}
						open = false;
						++count;
						break;
					}
				default:
					{
						break;
					}
				}
			}
		}
	}
	if (open) {
		$throwNew($IllegalArgumentException, $$str({"Illegally nested brackets:"_s, brackets}));
	}
	return count;
}

int8_t Utility::typeOfMethodSignature($String* signature) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	try {
		if ($nc(signature)->charAt(0) != u'(') {
			$throwNew($ClassFormatException, $$str({"Invalid method signature: "_s, signature}));
		}
		index = $nc(signature)->lastIndexOf((int32_t)u')') + 1;
		return typeOfSignature($(signature->substring(index)));
	} catch ($StringIndexOutOfBoundsException& e) {
		$throwNew($ClassFormatException, $$str({"Invalid method signature: "_s, signature}), e);
	}
	$shouldNotReachHere();
}

int8_t Utility::typeOfSignature($String* signature) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	try {
		switch ($nc(signature)->charAt(0)) {
		case u'B':
			{
				return $Const::T_BYTE;
			}
		case u'C':
			{
				return $Const::T_CHAR;
			}
		case u'D':
			{
				return $Const::T_DOUBLE;
			}
		case u'F':
			{
				return $Const::T_FLOAT;
			}
		case u'I':
			{
				return $Const::T_INT;
			}
		case u'J':
			{
				return $Const::T_LONG;
			}
		case u'L':
			{}
		case u'T':
			{
				return $Const::T_REFERENCE;
			}
		case u'[':
			{
				return $Const::T_ARRAY;
			}
		case u'V':
			{
				return $Const::T_VOID;
			}
		case u'Z':
			{
				return $Const::T_BOOLEAN;
			}
		case u'S':
			{
				return $Const::T_SHORT;
			}
		case u'!':
			{}
		case u'+':
			{}
		case u'*':
			{
				return typeOfSignature($(signature->substring(1)));
			}
		default:
			{
				$throwNew($ClassFormatException, $$str({"Invalid method signature: "_s, signature}));
			}
		}
	} catch ($StringIndexOutOfBoundsException& e) {
		$throwNew($ClassFormatException, $$str({"Invalid method signature: "_s, signature}), e);
	}
	$shouldNotReachHere();
}

int16_t Utility::searchOpcode($String* name$renamed) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	$init($Locale);
	$assign(name, $nc(name)->toLowerCase($Locale::ENGLISH));
	$init($Const);
	for (int16_t i = (int16_t)0; i < $Const::OPCODE_NAMES_LENGTH; ++i) {
		if ($nc($($Const::getOpcodeName(i)))->equals(name)) {
			return i;
		}
	}
	return (int16_t)-1;
}

int16_t Utility::byteToShort(int8_t b) {
	$init(Utility);
	return (b < 0) ? (int16_t)(256 + b) : (int16_t)b;
}

$String* Utility::toHexString($bytes* bytes) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(bytes)->length; ++i) {
		int16_t b = byteToShort(bytes->get(i));
		$var($String, hex, $Integer::toHexString(b));
		if (b < 16) {
			buf->append(u'0');
		}
		buf->append(hex);
		if (i < bytes->length - 1) {
			buf->append(u' ');
		}
	}
	return buf->toString();
}

$String* Utility::format(int32_t i, int32_t length, bool left_justify, char16_t fill) {
	$init(Utility);
	return fillup($($Integer::toString(i)), length, left_justify, fill);
}

$String* Utility::fillup($String* str, int32_t length, bool left_justify, char16_t fill) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	int32_t len = length - $nc(str)->length();
	$var($chars, buf, $new($chars, (len < 0) ? 0 : len));
	for (int32_t j = 0; j < buf->length; ++j) {
		buf->set(j, fill);
	}
	if (left_justify) {
		return $str({str, $$new($String, buf)});
	}
	return $str({$$new($String, buf), str});
}

bool Utility::equals($bytes* a, $bytes* b) {
	$init(Utility);
	int32_t size = 0;
	if ((size = $nc(a)->length) != $nc(b)->length) {
		return false;
	}
	for (int32_t i = 0; i < size; ++i) {
		if ($nc(a)->get(i) != $nc(b)->get(i)) {
			return false;
		}
	}
	return true;
}

void Utility::printArray($PrintStream* out, $ObjectArray* obj) {
	$init(Utility);
	$nc(out)->println($(printArray(obj, true)));
}

void Utility::printArray($PrintWriter* out, $ObjectArray* obj) {
	$init(Utility);
	$nc(out)->println($(printArray(obj, true)));
}

$String* Utility::printArray($ObjectArray* obj) {
	$init(Utility);
	return printArray(obj, true);
}

$String* Utility::printArray($ObjectArray* obj, bool braces) {
	$init(Utility);
	return printArray(obj, braces, false);
}

$String* Utility::printArray($ObjectArray* obj, bool braces, bool quote) {
	$init(Utility);
	if (obj == nullptr) {
		return nullptr;
	}
	$var($StringBuilder, buf, $new($StringBuilder));
	if (braces) {
		buf->append(u'{');
	}
	for (int32_t i = 0; i < $nc(obj)->length; ++i) {
		if (obj->get(i) != nullptr) {
			buf->append(quote ? "\""_s : ""_s)->append(obj->get(i))->append(quote ? "\""_s : ""_s);
		} else {
			buf->append("null"_s);
		}
		if (i < obj->length - 1) {
			buf->append(", "_s);
		}
	}
	if (braces) {
		buf->append(u'}');
	}
	return buf->toString();
}

bool Utility::isJavaIdentifierPart(char16_t ch) {
	$init(Utility);
	return ((ch >= u'a') && (ch <= u'z')) || ((ch >= u'A') && (ch <= u'Z')) || ((ch >= u'0') && (ch <= u'9')) || (ch == u'_');
}

$String* Utility::encode($bytes* bytes$renamed, bool compress) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($bytes, bytes, bytes$renamed);
	if (compress) {
		{
			$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$var($GZIPOutputStream, gos, $new($GZIPOutputStream, baos));
						{
							$var($Throwable, var$1, nullptr);
							try {
								try {
									gos->write(bytes, 0, $nc(bytes)->length);
									gos->finish();
									$assign(bytes, baos->toByteArray());
								} catch ($Throwable& t$) {
									try {
										gos->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable& var$2) {
								$assign(var$1, var$2);
							} /*finally*/ {
								gos->close();
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
					} catch ($Throwable& t$) {
						try {
							baos->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$0, var$3);
				} /*finally*/ {
					baos->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
	$var($CharArrayWriter, caw, $new($CharArrayWriter));
	{
		$var($Utility$JavaWriter, jw, $new($Utility$JavaWriter, caw));
		{
			$var($Throwable, var$4, nullptr);
			try {
				try {
					{
						$var($bytes, arr$, bytes);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							int8_t b = arr$->get(i$);
							{
								int32_t in = (int32_t)(b & (uint32_t)255);
								jw->write(in);
							}
						}
					}
				} catch ($Throwable& t$) {
					try {
						jw->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$5) {
				$assign(var$4, var$5);
			} /*finally*/ {
				jw->close();
			}
			if (var$4 != nullptr) {
				$throw(var$4);
			}
		}
	}
	return caw->toString();
}

$bytes* Utility::decode($String* s, bool uncompress) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($bytes, bytes, nullptr);
	{
		$var($Utility$JavaReader, jr, $new($Utility$JavaReader, $$new($CharArrayReader, $($nc(s)->toCharArray()))));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($ByteArrayOutputStream, bos, $new($ByteArrayOutputStream));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								int32_t ch = 0;
								while ((ch = jr->read()) >= 0) {
									bos->write(ch);
								}
								$assign(bytes, bos->toByteArray());
							} catch ($Throwable& t$) {
								try {
									bos->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							bos->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					try {
						jr->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				jr->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	if (uncompress) {
		$var($GZIPInputStream, gis, $new($GZIPInputStream, $$new($ByteArrayInputStream, bytes)));
		$var($bytes, tmp, $new($bytes, $nc(bytes)->length * 3));
		int32_t count = 0;
		int32_t b = 0;
		while ((b = gis->read()) >= 0) {
			tmp->set(count++, (int8_t)b);
		}
		$assign(bytes, $new($bytes, count));
		$System::arraycopy(tmp, 0, bytes, 0, count);
	}
	return bytes;
}

$String* Utility::convertString($String* label) {
	$init(Utility);
	$useLocalCurrentObjectStackCache();
	$var($chars, ch, $nc(label)->toCharArray());
	$var($StringBuilder, buf, $new($StringBuilder));
	{
		$var($chars, arr$, ch);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			char16_t element = arr$->get(i$);
			{
				switch (element) {
				case u'\n':
					{
						buf->append("\\n"_s);
						break;
					}
				case u'\r':
					{
						buf->append("\\r"_s);
						break;
					}
				case u'\"':
					{
						buf->append("\\\""_s);
						break;
					}
				case u'\'':
					{
						buf->append("\\\'"_s);
						break;
					}
				case u'\\':
					{
						buf->append("\\\\"_s);
						break;
					}
				default:
					{
						buf->append(element);
						break;
					}
				}
			}
		}
	}
	return buf->toString();
}

void clinit$Utility($Class* class$) {
	$assignStatic(Utility::consumed_chars, $new($Utility$1));
	Utility::wide = false;
	$assignStatic(Utility::CHAR_MAP, $new($ints, Utility::FREE_CHARS));
	$assignStatic(Utility::MAP_CHAR, $new($ints, 256));
	{
		int32_t j = 0;
		for (int32_t i = u'A'; i <= u'Z'; ++i) {
			$nc(Utility::CHAR_MAP)->set(j, i);
			$nc(Utility::MAP_CHAR)->set(i, j);
			++j;
		}
		for (int32_t i = u'g'; i <= u'z'; ++i) {
			$nc(Utility::CHAR_MAP)->set(j, i);
			$nc(Utility::MAP_CHAR)->set(i, j);
			++j;
		}
		$nc(Utility::CHAR_MAP)->set(j, u'$');
		$nc(Utility::MAP_CHAR)->set(u'$', j);
		++j;
		$nc(Utility::CHAR_MAP)->set(j, u'_');
		$nc(Utility::MAP_CHAR)->set(u'_', j);
	}
}

Utility::Utility() {
}

$Class* Utility::load$($String* name, bool initialize) {
	$loadClass(Utility, name, initialize, &_Utility_ClassInfo_, clinit$Utility, allocate$Utility);
	return class$;
}

$Class* Utility::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com