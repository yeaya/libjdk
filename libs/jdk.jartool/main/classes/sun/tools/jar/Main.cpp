#include <sun/tools/jar/Main.h>

#include <java/io/BufferedInputStream.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/File.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FileOutputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Error.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/FindException.h>
#include <java/lang/module/InvalidModuleDescriptorException.h>
#include <java/lang/module/ModuleDescriptor$Exports.h>
#include <java/lang/module/ModuleDescriptor$Opens.h>
#include <java/lang/module/ModuleDescriptor$Provides.h>
#include <java/lang/module/ModuleDescriptor$Requires.h>
#include <java/lang/module/ModuleDescriptor$Version.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/lang/module/ModuleReference.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/StandardCopyOption.h>
#include <java/text/MessageFormat.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/Date.h>
#include <java/util/Enumeration.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/MissingResourceException.h>
#include <java/util/Optional.h>
#include <java/util/ResourceBundle.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/TreeSet.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/jar/Attributes$Name.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/JarFile.h>
#include <java/util/jar/JarOutputStream.h>
#include <java/util/jar/Manifest.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <java/util/zip/DeflaterOutputStream.h>
#include <java/util/zip/InflaterInputStream.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipFile.h>
#include <java/util/zip/ZipInputStream.h>
#include <java/util/zip/ZipOutputStream.h>
#include <jdk/internal/module/Checks.h>
#include <jdk/internal/module/ModuleHashes.h>
#include <jdk/internal/module/ModuleInfo$Attributes.h>
#include <jdk/internal/module/ModuleInfo.h>
#include <jdk/internal/module/ModuleInfoExtender.h>
#include <jdk/internal/module/ModuleResolution.h>
#include <jdk/internal/module/ModuleTarget.h>
#include <jdk/internal/util/jar/JarIndex.h>
#include <sun/tools/jar/CommandLine.h>
#include <sun/tools/jar/GNUStyleOptions$BadArgs.h>
#include <sun/tools/jar/GNUStyleOptions.h>
#include <sun/tools/jar/JarException.h>
#include <sun/tools/jar/Main$1.h>
#include <sun/tools/jar/Main$CRC32OutputStream.h>
#include <sun/tools/jar/Main$Entry.h>
#include <sun/tools/jar/Main$Hasher.h>
#include <sun/tools/jar/Main$ModuleInfoEntry.h>
#include <sun/tools/jar/Main$StreamedModuleInfoEntry.h>
#include <sun/tools/jar/Main$ZipFileModuleInfoEntry.h>
#include <sun/tools/jar/Validator$InvalidJarException.h>
#include <sun/tools/jar/Validator.h>
#include <jcpp.h>

#undef BASE_VERSION
#undef CLASS_PATH
#undef DEFLATED
#undef ENGLISH
#undef ENTRYNAME_COMPARATOR
#undef ENTRY_COMPARATOR
#undef MAIN_CLASS
#undef MANIFEST_DIR
#undef MANIFEST_VERSION
#undef MODULE_INFO
#undef MULTI_RELEASE
#undef REPLACE_EXISTING
#undef ROOT
#undef STORED
#undef VERSION
#undef VERSIONS_DIR
#undef VERSIONS_DIR_LENGTH

using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $PathArray = $Array<::java::nio::file::Path>;
using $Main$ModuleInfoEntryArray = $Array<::sun::tools::jar::Main$ModuleInfoEntry>;
using $Main$ZipFileModuleInfoEntryArray = $Array<::sun::tools::jar::Main$ZipFileModuleInfoEntry>;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $File = ::java::io::File;
using $FileDescriptor = ::java::io::FileDescriptor;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FileOutputStream = ::java::io::FileOutputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $FindException = ::java::lang::module::FindException;
using $InvalidModuleDescriptorException = ::java::lang::module::InvalidModuleDescriptorException;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Exports = ::java::lang::module::ModuleDescriptor$Exports;
using $ModuleDescriptor$Opens = ::java::lang::module::ModuleDescriptor$Opens;
using $ModuleDescriptor$Provides = ::java::lang::module::ModuleDescriptor$Provides;
using $ModuleDescriptor$Requires = ::java::lang::module::ModuleDescriptor$Requires;
using $ModuleDescriptor$Version = ::java::lang::module::ModuleDescriptor$Version;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CopyOption = ::java::nio::file::CopyOption;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $StandardCopyOption = ::java::nio::file::StandardCopyOption;
using $MessageFormat = ::java::text::MessageFormat;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $Date = ::java::util::Date;
using $Enumeration = ::java::util::Enumeration;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $MissingResourceException = ::java::util::MissingResourceException;
using $Optional = ::java::util::Optional;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $TreeSet = ::java::util::TreeSet;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Attributes = ::java::util::jar::Attributes;
using $Attributes$Name = ::java::util::jar::Attributes$Name;
using $JarFile = ::java::util::jar::JarFile;
using $JarOutputStream = ::java::util::jar::JarOutputStream;
using $Manifest = ::java::util::jar::Manifest;
using $Pattern = ::java::util::regex::Pattern;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $DeflaterOutputStream = ::java::util::zip::DeflaterOutputStream;
using $InflaterInputStream = ::java::util::zip::InflaterInputStream;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;
using $ZipInputStream = ::java::util::zip::ZipInputStream;
using $ZipOutputStream = ::java::util::zip::ZipOutputStream;
using $Checks = ::jdk::internal::module::Checks;
using $ModuleHashes = ::jdk::internal::module::ModuleHashes;
using $ModuleInfo = ::jdk::internal::module::ModuleInfo;
using $ModuleInfo$Attributes = ::jdk::internal::module::ModuleInfo$Attributes;
using $ModuleInfoExtender = ::jdk::internal::module::ModuleInfoExtender;
using $ModuleResolution = ::jdk::internal::module::ModuleResolution;
using $ModuleTarget = ::jdk::internal::module::ModuleTarget;
using $JarIndex = ::jdk::internal::util::jar::JarIndex;
using $CommandLine = ::sun::tools::jar::CommandLine;
using $GNUStyleOptions = ::sun::tools::jar::GNUStyleOptions;
using $GNUStyleOptions$BadArgs = ::sun::tools::jar::GNUStyleOptions$BadArgs;
using $JarException = ::sun::tools::jar::JarException;
using $Main$1 = ::sun::tools::jar::Main$1;
using $Main$CRC32OutputStream = ::sun::tools::jar::Main$CRC32OutputStream;
using $Main$Entry = ::sun::tools::jar::Main$Entry;
using $Main$Hasher = ::sun::tools::jar::Main$Hasher;
using $Main$ModuleInfoEntry = ::sun::tools::jar::Main$ModuleInfoEntry;
using $Main$StreamedModuleInfoEntry = ::sun::tools::jar::Main$StreamedModuleInfoEntry;
using $Main$ZipFileModuleInfoEntry = ::sun::tools::jar::Main$ZipFileModuleInfoEntry;
using $Validator = ::sun::tools::jar::Validator;
using $Validator$InvalidJarException = ::sun::tools::jar::Validator$InvalidJarException;

namespace sun {
	namespace tools {
		namespace jar {

class Main$$Lambda$lambda$static$27 : public $Comparator {
	$class(Main$$Lambda$lambda$static$27, $NO_CLASS_INIT, $Comparator)
public:
	void init$() {
	}
	virtual int32_t compare(Object$* s1, Object$* s2) override {
		 return Main::lambda$static$27($cast($String, s1), $cast($String, s2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$static$27>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$static$27::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$static$27::*)()>(&Main$$Lambda$lambda$static$27::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$static$27::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$static$27",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$static$27::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$static$27, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$static$27::class$ = nullptr;

class Main$$Lambda$getName$1 : public $Function {
	$class(Main$$Lambda$getName$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ZipEntry, inst$)->getName());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$getName$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$getName$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$getName$1::*)()>(&Main$$Lambda$getName$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$getName$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$getName$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$getName$1::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$getName$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$getName$1::class$ = nullptr;

class Main$$Lambda$lambda$run$0$2 : public $Predicate {
	$class(Main$$Lambda$lambda$run$0$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		 return Main::lambda$run$0($cast($Main$Entry, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$run$0$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$run$0$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$run$0$2::*)()>(&Main$$Lambda$lambda$run$0$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$run$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$run$0$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$run$0$2::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$run$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$run$0$2::class$ = nullptr;

class Main$$Lambda$lambda$run$1$3 : public $Consumer {
	$class(Main$$Lambda$lambda$run$1$3, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Main* inst, $Set* packages, $Set* jentries) {
		$set(this, inst$, inst);
		$set(this, packages, packages);
		$set(this, jentries, jentries);
	}
	virtual void accept(Object$* e) override {
		$nc(inst$)->lambda$run$1(packages, jentries, $cast($Main$Entry, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$run$1$3>());
	}
	Main* inst$ = nullptr;
	$Set* packages = nullptr;
	$Set* jentries = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$run$1$3::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$run$1$3, inst$)},
	{"packages", "Ljava/util/Set;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$run$1$3, packages)},
	{"jentries", "Ljava/util/Set;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$run$1$3, jentries)},
	{}
};
$MethodInfo Main$$Lambda$lambda$run$1$3::methodInfos[3] = {
	{"<init>", "(Lsun/tools/jar/Main;Ljava/util/Set;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$run$1$3::*)(Main*,$Set*,$Set*)>(&Main$$Lambda$lambda$run$1$3::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$run$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$run$1$3",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$run$1$3::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$run$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$run$1$3::class$ = nullptr;

class Main$$Lambda$filesToEntryNames$4 : public $Function {
	$class(Main$$Lambda$filesToEntryNames$4, $NO_CLASS_INIT, $Function)
public:
	void init$(Main* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* fileEntries) override {
		 return $of($nc(inst$)->filesToEntryNames($cast($Map$Entry, fileEntries)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$filesToEntryNames$4>());
	}
	Main* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$filesToEntryNames$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Main$$Lambda$filesToEntryNames$4, inst$)},
	{}
};
$MethodInfo Main$$Lambda$filesToEntryNames$4::methodInfos[3] = {
	{"<init>", "(Lsun/tools/jar/Main;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$filesToEntryNames$4::*)(Main*)>(&Main$$Lambda$filesToEntryNames$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$filesToEntryNames$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$filesToEntryNames$4",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$filesToEntryNames$4::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$filesToEntryNames$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$filesToEntryNames$4::class$ = nullptr;

class Main$$Lambda$lambda$filesMapToFiles$2$5 : public $IntFunction {
	$class(Main$$Lambda$lambda$filesMapToFiles$2$5, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(Main::lambda$filesMapToFiles$2(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$filesMapToFiles$2$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$filesMapToFiles$2$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$filesMapToFiles$2$5::*)()>(&Main$$Lambda$lambda$filesMapToFiles$2$5::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$filesMapToFiles$2$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$filesMapToFiles$2$5",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$filesMapToFiles$2$5::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$filesMapToFiles$2$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$filesMapToFiles$2$5::class$ = nullptr;

class Main$$Lambda$lambda$filesToEntryNames$3$6 : public $Function {
	$class(Main$$Lambda$lambda$filesToEntryNames$3$6, $NO_CLASS_INIT, $Function)
public:
	void init$(Main* inst, $Set* cpaths, int32_t version) {
		$set(this, inst$, inst);
		$set(this, cpaths, cpaths);
		this->version = version;
	}
	virtual $Object* apply(Object$* f) override {
		 return $of($nc(inst$)->lambda$filesToEntryNames$3(cpaths, version, $cast($String, f)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$filesToEntryNames$3$6>());
	}
	Main* inst$ = nullptr;
	$Set* cpaths = nullptr;
	int32_t version = 0;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$filesToEntryNames$3$6::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$filesToEntryNames$3$6, inst$)},
	{"cpaths", "Ljava/util/Set;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$filesToEntryNames$3$6, cpaths)},
	{"version", "I", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$filesToEntryNames$3$6, version)},
	{}
};
$MethodInfo Main$$Lambda$lambda$filesToEntryNames$3$6::methodInfos[3] = {
	{"<init>", "(Lsun/tools/jar/Main;Ljava/util/Set;I)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$filesToEntryNames$3$6::*)(Main*,$Set*,int32_t)>(&Main$$Lambda$lambda$filesToEntryNames$3$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$filesToEntryNames$3$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$filesToEntryNames$3$6",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$filesToEntryNames$3$6::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$filesToEntryNames$3$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$filesToEntryNames$3$6::class$ = nullptr;

class Main$$Lambda$lambda$update$4$7 : public $Consumer {
	$class(Main$$Lambda$lambda$update$4$7, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Main* inst, $Set* pkgs) {
		$set(this, inst$, inst);
		$set(this, pkgs, pkgs);
	}
	virtual void accept(Object$* je) override {
		$nc(inst$)->lambda$update$4(pkgs, $cast($String, je));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$update$4$7>());
	}
	Main* inst$ = nullptr;
	$Set* pkgs = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$update$4$7::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$update$4$7, inst$)},
	{"pkgs", "Ljava/util/Set;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$update$4$7, pkgs)},
	{}
};
$MethodInfo Main$$Lambda$lambda$update$4$7::methodInfos[3] = {
	{"<init>", "(Lsun/tools/jar/Main;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$update$4$7::*)(Main*,$Set*)>(&Main$$Lambda$lambda$update$4$7::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$update$4$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$update$4$7",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$update$4$7::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$update$4$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$update$4$7::class$ = nullptr;

class Main$$Lambda$lambda$replaceFSC$5$8 : public $Consumer {
	$class(Main$$Lambda$lambda$replaceFSC$5$8, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* filesMap) {
		$set(this, filesMap, filesMap);
	}
	virtual void accept(Object$* version) override {
		Main::lambda$replaceFSC$5(filesMap, $cast($Integer, version));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$replaceFSC$5$8>());
	}
	$Map* filesMap = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$replaceFSC$5$8::fieldInfos[2] = {
	{"filesMap", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$replaceFSC$5$8, filesMap)},
	{}
};
$MethodInfo Main$$Lambda$lambda$replaceFSC$5$8::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$replaceFSC$5$8::*)($Map*)>(&Main$$Lambda$lambda$replaceFSC$5$8::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$replaceFSC$5$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$replaceFSC$5$8",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$replaceFSC$5$8::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$replaceFSC$5$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$replaceFSC$5$8::class$ = nullptr;

class Main$$Lambda$lambda$describeModule$6$9 : public $Predicate {
	$class(Main$$Lambda$lambda$describeModule$6$9, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		 return Main::lambda$describeModule$6($cast($ZipEntry, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModule$6$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$describeModule$6$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModule$6$9::*)()>(&Main$$Lambda$lambda$describeModule$6$9::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModule$6$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModule$6$9",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModule$6$9::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModule$6$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModule$6$9::class$ = nullptr;

class Main$$Lambda$lambda$describeModule$7$10 : public $Function {
	$class(Main$$Lambda$lambda$describeModule$7$10, $NO_CLASS_INIT, $Function)
public:
	void init$($ZipFile* zipFile) {
		$set(this, zipFile, zipFile);
	}
	virtual $Object* apply(Object$* e) override {
		 return $of(Main::lambda$describeModule$7(zipFile, $cast($ZipEntry, e)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModule$7$10>());
	}
	$ZipFile* zipFile = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$describeModule$7$10::fieldInfos[2] = {
	{"zipFile", "Ljava/util/zip/ZipFile;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$describeModule$7$10, zipFile)},
	{}
};
$MethodInfo Main$$Lambda$lambda$describeModule$7$10::methodInfos[3] = {
	{"<init>", "(Ljava/util/zip/ZipFile;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModule$7$10::*)($ZipFile*)>(&Main$$Lambda$lambda$describeModule$7$10::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModule$7$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModule$7$10",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModule$7$10::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModule$7$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModule$7$10::class$ = nullptr;

class Main$$Lambda$lambda$describeModule$8$11 : public $IntFunction {
	$class(Main$$Lambda$lambda$describeModule$8$11, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(Main::lambda$describeModule$8(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModule$8$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$describeModule$8$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModule$8$11::*)()>(&Main$$Lambda$lambda$describeModule$8$11::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModule$8$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModule$8$11",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModule$8$11::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModule$8$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModule$8$11::class$ = nullptr;

class Main$$Lambda$name$12 : public $Function {
	$class(Main$$Lambda$name$12, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Main$ModuleInfoEntry, inst$)->name());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$name$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$name$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$name$12::*)()>(&Main$$Lambda$name$12::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$name$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$name$12",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$name$12::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$name$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$name$12::class$ = nullptr;

class Main$$Lambda$lambda$describeModuleFromStream$9$13 : public $IntFunction {
	$class(Main$$Lambda$lambda$describeModuleFromStream$9$13, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(Main::lambda$describeModuleFromStream$9(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModuleFromStream$9$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$describeModuleFromStream$9$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModuleFromStream$9$13::*)()>(&Main$$Lambda$lambda$describeModuleFromStream$9$13::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModuleFromStream$9$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModuleFromStream$9$13",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModuleFromStream$9$13::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModuleFromStream$9$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModuleFromStream$9$13::class$ = nullptr;

class Main$$Lambda$lambda$describeModuleFromEntries$10$14 : public $Predicate {
	$class(Main$$Lambda$lambda$describeModuleFromEntries$10$14, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		 return Main::lambda$describeModuleFromEntries$10($cast($Main$ModuleInfoEntry, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModuleFromEntries$10$14>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$describeModuleFromEntries$10$14::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModuleFromEntries$10$14::*)()>(&Main$$Lambda$lambda$describeModuleFromEntries$10$14::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModuleFromEntries$10$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModuleFromEntries$10$14",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModuleFromEntries$10$14::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModuleFromEntries$10$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModuleFromEntries$10$14::class$ = nullptr;

class Main$$Lambda$versionFromEntryName$15 : public $Function {
	$class(Main$$Lambda$versionFromEntryName$15, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* name) override {
		 return $of(Main::versionFromEntryName($cast($String, name)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$versionFromEntryName$15>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$versionFromEntryName$15::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$versionFromEntryName$15::*)()>(&Main$$Lambda$versionFromEntryName$15::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$versionFromEntryName$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$versionFromEntryName$15",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$versionFromEntryName$15::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$versionFromEntryName$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$versionFromEntryName$15::class$ = nullptr;

class Main$$Lambda$lambda$toLowerCaseString$11$16 : public $Function {
	$class(Main$$Lambda$lambda$toLowerCaseString$11$16, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* e) override {
		 return $of(Main::lambda$toLowerCaseString$11(e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$toLowerCaseString$11$16>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$toLowerCaseString$11$16::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$toLowerCaseString$11$16::*)()>(&Main$$Lambda$lambda$toLowerCaseString$11$16::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$toLowerCaseString$11$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$toLowerCaseString$11$16",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$toLowerCaseString$11$16::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$toLowerCaseString$11$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$toLowerCaseString$11$16::class$ = nullptr;

class Main$$Lambda$lambda$toString$12$17 : public $Function {
	$class(Main$$Lambda$lambda$toString$12$17, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* e) override {
		 return $of(Main::lambda$toString$12(e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$toString$12$17>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$toString$12$17::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$toString$12$17::*)()>(&Main$$Lambda$lambda$toString$12$17::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$toString$12$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$toString$12$17",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$toString$12$17::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$toString$12$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$toString$12$17::class$ = nullptr;

class Main$$Lambda$source$18 : public $Function {
	$class(Main$$Lambda$source$18, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ModuleDescriptor$Exports, inst$)->source());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$source$18>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$source$18::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$source$18::*)()>(&Main$$Lambda$source$18::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$source$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$source$18",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$source$18::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$source$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$source$18::class$ = nullptr;

class Main$$Lambda$lambda$describeModule$13$19 : public $Predicate {
	$class(Main$$Lambda$lambda$describeModule$13$19, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		 return Main::lambda$describeModule$13($cast($ModuleDescriptor$Exports, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModule$13$19>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$describeModule$13$19::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModule$13$19::*)()>(&Main$$Lambda$lambda$describeModule$13$19::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModule$13$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModule$13$19",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModule$13$19::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModule$13$19, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModule$13$19::class$ = nullptr;

class Main$$Lambda$lambda$describeModule$14$20 : public $Consumer {
	$class(Main$$Lambda$lambda$describeModule$14$20, $NO_CLASS_INIT, $Consumer)
public:
	void init$($StringBuilder* sb) {
		$set(this, sb, sb);
	}
	virtual void accept(Object$* e) override {
		Main::lambda$describeModule$14(sb, $cast($ModuleDescriptor$Exports, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModule$14$20>());
	}
	$StringBuilder* sb = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$describeModule$14$20::fieldInfos[2] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$describeModule$14$20, sb)},
	{}
};
$MethodInfo Main$$Lambda$lambda$describeModule$14$20::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModule$14$20::*)($StringBuilder*)>(&Main$$Lambda$lambda$describeModule$14$20::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModule$14$20::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModule$14$20",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModule$14$20::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModule$14$20, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModule$14$20::class$ = nullptr;

class Main$$Lambda$lambda$describeModule$15$21 : public $Consumer {
	$class(Main$$Lambda$lambda$describeModule$15$21, $NO_CLASS_INIT, $Consumer)
public:
	void init$($StringBuilder* sb) {
		$set(this, sb, sb);
	}
	virtual void accept(Object$* r) override {
		Main::lambda$describeModule$15(sb, $cast($ModuleDescriptor$Requires, r));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModule$15$21>());
	}
	$StringBuilder* sb = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$describeModule$15$21::fieldInfos[2] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$describeModule$15$21, sb)},
	{}
};
$MethodInfo Main$$Lambda$lambda$describeModule$15$21::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModule$15$21::*)($StringBuilder*)>(&Main$$Lambda$lambda$describeModule$15$21::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModule$15$21::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModule$15$21",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModule$15$21::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModule$15$21, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModule$15$21::class$ = nullptr;

class Main$$Lambda$lambda$describeModule$16$22 : public $Consumer {
	$class(Main$$Lambda$lambda$describeModule$16$22, $NO_CLASS_INIT, $Consumer)
public:
	void init$($StringBuilder* sb) {
		$set(this, sb, sb);
	}
	virtual void accept(Object$* s) override {
		Main::lambda$describeModule$16(sb, $cast($String, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModule$16$22>());
	}
	$StringBuilder* sb = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$describeModule$16$22::fieldInfos[2] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$describeModule$16$22, sb)},
	{}
};
$MethodInfo Main$$Lambda$lambda$describeModule$16$22::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModule$16$22::*)($StringBuilder*)>(&Main$$Lambda$lambda$describeModule$16$22::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModule$16$22::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModule$16$22",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModule$16$22::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModule$16$22, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModule$16$22::class$ = nullptr;

class Main$$Lambda$service$23 : public $Function {
	$class(Main$$Lambda$service$23, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ModuleDescriptor$Provides, inst$)->service());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$service$23>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$service$23::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$service$23::*)()>(&Main$$Lambda$service$23::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$service$23::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$service$23",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$service$23::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$service$23, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$service$23::class$ = nullptr;

class Main$$Lambda$lambda$describeModule$17$24 : public $Consumer {
	$class(Main$$Lambda$lambda$describeModule$17$24, $NO_CLASS_INIT, $Consumer)
public:
	void init$($StringBuilder* sb) {
		$set(this, sb, sb);
	}
	virtual void accept(Object$* p) override {
		Main::lambda$describeModule$17(sb, $cast($ModuleDescriptor$Provides, p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModule$17$24>());
	}
	$StringBuilder* sb = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$describeModule$17$24::fieldInfos[2] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$describeModule$17$24, sb)},
	{}
};
$MethodInfo Main$$Lambda$lambda$describeModule$17$24::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModule$17$24::*)($StringBuilder*)>(&Main$$Lambda$lambda$describeModule$17$24::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModule$17$24::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModule$17$24",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModule$17$24::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModule$17$24, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModule$17$24::class$ = nullptr;

class Main$$Lambda$isQualified$25 : public $Predicate {
	$class(Main$$Lambda$isQualified$25, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($ModuleDescriptor$Exports, inst$)->isQualified();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$isQualified$25>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$isQualified$25::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$isQualified$25::*)()>(&Main$$Lambda$isQualified$25::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$isQualified$25::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$isQualified$25",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$isQualified$25::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$isQualified$25, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$isQualified$25::class$ = nullptr;

class Main$$Lambda$lambda$describeModule$18$26 : public $Consumer {
	$class(Main$$Lambda$lambda$describeModule$18$26, $NO_CLASS_INIT, $Consumer)
public:
	void init$($StringBuilder* sb) {
		$set(this, sb, sb);
	}
	virtual void accept(Object$* e) override {
		Main::lambda$describeModule$18(sb, $cast($ModuleDescriptor$Exports, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModule$18$26>());
	}
	$StringBuilder* sb = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$describeModule$18$26::fieldInfos[2] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$describeModule$18$26, sb)},
	{}
};
$MethodInfo Main$$Lambda$lambda$describeModule$18$26::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModule$18$26::*)($StringBuilder*)>(&Main$$Lambda$lambda$describeModule$18$26::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModule$18$26::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModule$18$26",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModule$18$26::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModule$18$26, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModule$18$26::class$ = nullptr;

class Main$$Lambda$source$27 : public $Function {
	$class(Main$$Lambda$source$27, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ModuleDescriptor$Opens, inst$)->source());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$source$27>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$source$27::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$source$27::*)()>(&Main$$Lambda$source$27::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$source$27::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$source$27",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$source$27::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$source$27, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$source$27::class$ = nullptr;

class Main$$Lambda$lambda$describeModule$19$28 : public $Predicate {
	$class(Main$$Lambda$lambda$describeModule$19$28, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* o) override {
		 return Main::lambda$describeModule$19($cast($ModuleDescriptor$Opens, o));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModule$19$28>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$describeModule$19$28::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModule$19$28::*)()>(&Main$$Lambda$lambda$describeModule$19$28::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModule$19$28::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModule$19$28",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModule$19$28::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModule$19$28, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModule$19$28::class$ = nullptr;

class Main$$Lambda$lambda$describeModule$20$29 : public $Consumer {
	$class(Main$$Lambda$lambda$describeModule$20$29, $NO_CLASS_INIT, $Consumer)
public:
	void init$($StringBuilder* sb) {
		$set(this, sb, sb);
	}
	virtual void accept(Object$* o) override {
		Main::lambda$describeModule$20(sb, $cast($ModuleDescriptor$Opens, o));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModule$20$29>());
	}
	$StringBuilder* sb = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$describeModule$20$29::fieldInfos[2] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$describeModule$20$29, sb)},
	{}
};
$MethodInfo Main$$Lambda$lambda$describeModule$20$29::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModule$20$29::*)($StringBuilder*)>(&Main$$Lambda$lambda$describeModule$20$29::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModule$20$29::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModule$20$29",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModule$20$29::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModule$20$29, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModule$20$29::class$ = nullptr;

class Main$$Lambda$isQualified$30 : public $Predicate {
	$class(Main$$Lambda$isQualified$30, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($ModuleDescriptor$Opens, inst$)->isQualified();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$isQualified$30>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$isQualified$30::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$isQualified$30::*)()>(&Main$$Lambda$isQualified$30::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$isQualified$30::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$isQualified$30",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$isQualified$30::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$isQualified$30, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$isQualified$30::class$ = nullptr;

class Main$$Lambda$lambda$describeModule$21$31 : public $Consumer {
	$class(Main$$Lambda$lambda$describeModule$21$31, $NO_CLASS_INIT, $Consumer)
public:
	void init$($StringBuilder* sb) {
		$set(this, sb, sb);
	}
	virtual void accept(Object$* o) override {
		Main::lambda$describeModule$21(sb, $cast($ModuleDescriptor$Opens, o));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModule$21$31>());
	}
	$StringBuilder* sb = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$describeModule$21$31::fieldInfos[2] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$describeModule$21$31, sb)},
	{}
};
$MethodInfo Main$$Lambda$lambda$describeModule$21$31::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModule$21$31::*)($StringBuilder*)>(&Main$$Lambda$lambda$describeModule$21$31::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModule$21$31::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModule$21$31",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModule$21$31::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModule$21$31, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModule$21$31::class$ = nullptr;

class Main$$Lambda$remove$32 : public $Consumer {
	$class(Main$$Lambda$remove$32, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Set* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->remove(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$remove$32>());
	}
	$Set* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$remove$32::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Main$$Lambda$remove$32, inst$)},
	{}
};
$MethodInfo Main$$Lambda$remove$32::methodInfos[3] = {
	{"<init>", "(Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$remove$32::*)($Set*)>(&Main$$Lambda$remove$32::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$remove$32::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$remove$32",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$remove$32::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$remove$32, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$remove$32::class$ = nullptr;

class Main$$Lambda$lambda$describeModule$22$33 : public $Consumer {
	$class(Main$$Lambda$lambda$describeModule$22$33, $NO_CLASS_INIT, $Consumer)
public:
	void init$($StringBuilder* sb) {
		$set(this, sb, sb);
	}
	virtual void accept(Object$* p) override {
		Main::lambda$describeModule$22(sb, $cast($String, p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModule$22$33>());
	}
	$StringBuilder* sb = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$describeModule$22$33::fieldInfos[2] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$describeModule$22$33, sb)},
	{}
};
$MethodInfo Main$$Lambda$lambda$describeModule$22$33::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModule$22$33::*)($StringBuilder*)>(&Main$$Lambda$lambda$describeModule$22$33::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModule$22$33::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModule$22$33",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModule$22$33::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModule$22$33, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModule$22$33::class$ = nullptr;

class Main$$Lambda$lambda$describeModule$23$34 : public $Consumer {
	$class(Main$$Lambda$lambda$describeModule$23$34, $NO_CLASS_INIT, $Consumer)
public:
	void init$($StringBuilder* sb) {
		$set(this, sb, sb);
	}
	virtual void accept(Object$* v) override {
		Main::lambda$describeModule$23(sb, $cast($String, v));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModule$23$34>());
	}
	$StringBuilder* sb = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$describeModule$23$34::fieldInfos[2] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$describeModule$23$34, sb)},
	{}
};
$MethodInfo Main$$Lambda$lambda$describeModule$23$34::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModule$23$34::*)($StringBuilder*)>(&Main$$Lambda$lambda$describeModule$23$34::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModule$23$34::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModule$23$34",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModule$23$34::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModule$23$34, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModule$23$34::class$ = nullptr;

class Main$$Lambda$lambda$describeModule$24$35 : public $Consumer {
	$class(Main$$Lambda$lambda$describeModule$24$35, $NO_CLASS_INIT, $Consumer)
public:
	void init$($StringBuilder* sb, $ModuleHashes* hashes) {
		$set(this, sb, sb);
		$set(this, hashes, hashes);
	}
	virtual void accept(Object$* mod) override {
		Main::lambda$describeModule$24(sb, hashes, $cast($String, mod));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$describeModule$24$35>());
	}
	$StringBuilder* sb = nullptr;
	$ModuleHashes* hashes = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$describeModule$24$35::fieldInfos[3] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$describeModule$24$35, sb)},
	{"hashes", "Ljdk/internal/module/ModuleHashes;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$describeModule$24$35, hashes)},
	{}
};
$MethodInfo Main$$Lambda$lambda$describeModule$24$35::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;Ljdk/internal/module/ModuleHashes;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$describeModule$24$35::*)($StringBuilder*,$ModuleHashes*)>(&Main$$Lambda$lambda$describeModule$24$35::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$describeModule$24$35::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$describeModule$24$35",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$describeModule$24$35::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$describeModule$24$35, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$describeModule$24$35::class$ = nullptr;

class Main$$Lambda$providers$36 : public $Function {
	$class(Main$$Lambda$providers$36, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ModuleDescriptor$Provides, inst$)->providers());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$providers$36>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$providers$36::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$providers$36::*)()>(&Main$$Lambda$providers$36::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$providers$36::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$providers$36",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$providers$36::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$providers$36, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$providers$36::class$ = nullptr;

class Main$$Lambda$stream$37 : public $Function {
	$class(Main$$Lambda$stream$37, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Collection, inst$)->stream());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$stream$37>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$stream$37::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$stream$37::*)()>(&Main$$Lambda$stream$37::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$stream$37::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$stream$37",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$stream$37::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$stream$37, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$stream$37::class$ = nullptr;

class Main$$Lambda$lambda$checkModuleInfo$25$38 : public $Predicate {
	$class(Main$$Lambda$lambda$checkModuleInfo$25$38, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Set* entries) {
		$set(this, entries, entries);
	}
	virtual bool test(Object$* p) override {
		 return Main::lambda$checkModuleInfo$25(entries, $cast($String, p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$checkModuleInfo$25$38>());
	}
	$Set* entries = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$checkModuleInfo$25$38::fieldInfos[2] = {
	{"entries", "Ljava/util/Set;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$checkModuleInfo$25$38, entries)},
	{}
};
$MethodInfo Main$$Lambda$lambda$checkModuleInfo$25$38::methodInfos[3] = {
	{"<init>", "(Ljava/util/Set;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$checkModuleInfo$25$38::*)($Set*)>(&Main$$Lambda$lambda$checkModuleInfo$25$38::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$checkModuleInfo$25$38::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$checkModuleInfo$25$38",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$checkModuleInfo$25$38::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$checkModuleInfo$25$38, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$checkModuleInfo$25$38::class$ = nullptr;

class Main$$Lambda$lambda$checkModuleInfo$26$39 : public $Consumer {
	$class(Main$$Lambda$lambda$checkModuleInfo$26$39, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Main* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* p) override {
		$nc(inst$)->lambda$checkModuleInfo$26($cast($String, p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$checkModuleInfo$26$39>());
	}
	Main* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$lambda$checkModuleInfo$26$39::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Main$$Lambda$lambda$checkModuleInfo$26$39, inst$)},
	{}
};
$MethodInfo Main$$Lambda$lambda$checkModuleInfo$26$39::methodInfos[3] = {
	{"<init>", "(Lsun/tools/jar/Main;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$checkModuleInfo$26$39::*)(Main*)>(&Main$$Lambda$lambda$checkModuleInfo$26$39::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$checkModuleInfo$26$39::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$$Lambda$lambda$checkModuleInfo$26$39",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$lambda$checkModuleInfo$26$39::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$checkModuleInfo$26$39, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$checkModuleInfo$26$39::class$ = nullptr;

$FieldInfo _Main_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Main, $assertionsDisabled)},
	{"program", "Ljava/lang/String;", nullptr, 0, $field(Main, program)},
	{"out", "Ljava/io/PrintWriter;", nullptr, 0, $field(Main, out)},
	{"err", "Ljava/io/PrintWriter;", nullptr, 0, $field(Main, err)},
	{"fname", "Ljava/lang/String;", nullptr, 0, $field(Main, fname)},
	{"mname", "Ljava/lang/String;", nullptr, 0, $field(Main, mname)},
	{"ename", "Ljava/lang/String;", nullptr, 0, $field(Main, ename)},
	{"zname", "Ljava/lang/String;", nullptr, 0, $field(Main, zname)},
	{"rootjar", "Ljava/lang/String;", nullptr, 0, $field(Main, rootjar)},
	{"BASE_VERSION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, BASE_VERSION)},
	{"entryMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lsun/tools/jar/Main$Entry;>;", 0, $field(Main, entryMap)},
	{"entries", "Ljava/util/Set;", "Ljava/util/Set<Lsun/tools/jar/Main$Entry;>;", 0, $field(Main, entries)},
	{"moduleInfos", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[B>;", 0, $field(Main, moduleInfos)},
	{"pathsMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/util/Set<Ljava/lang/String;>;>;", 0, $field(Main, pathsMap)},
	{"filesMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;[Ljava/lang/String;>;", 0, $field(Main, filesMap)},
	{"isMultiRelease", "Z", nullptr, 0, $field(Main, isMultiRelease)},
	{"releaseValue", "I", nullptr, 0, $field(Main, releaseValue)},
	{"cflag", "Z", nullptr, 0, $field(Main, cflag)},
	{"uflag", "Z", nullptr, 0, $field(Main, uflag)},
	{"xflag", "Z", nullptr, 0, $field(Main, xflag)},
	{"tflag", "Z", nullptr, 0, $field(Main, tflag)},
	{"vflag", "Z", nullptr, 0, $field(Main, vflag)},
	{"flag0", "Z", nullptr, 0, $field(Main, flag0)},
	{"Mflag", "Z", nullptr, 0, $field(Main, Mflag)},
	{"iflag", "Z", nullptr, 0, $field(Main, iflag)},
	{"pflag", "Z", nullptr, 0, $field(Main, pflag)},
	{"dflag", "Z", nullptr, 0, $field(Main, dflag)},
	{"validate", "Z", nullptr, 0, $field(Main, validate)},
	{"suppressDeprecateMsg", "Z", nullptr, 0, $field(Main, suppressDeprecateMsg)},
	{"info", "Ljava/util/function/Consumer;", "Ljava/util/function/Consumer<Ljava/io/PrintWriter;>;", 0, $field(Main, info)},
	{"moduleVersion", "Ljava/lang/module/ModuleDescriptor$Version;", nullptr, 0, $field(Main, moduleVersion)},
	{"modulesToHash", "Ljava/util/regex/Pattern;", nullptr, 0, $field(Main, modulesToHash)},
	{"moduleResolution", "Ljdk/internal/module/ModuleResolution;", nullptr, 0, $field(Main, moduleResolution)},
	{"moduleFinder", "Ljava/lang/module/ModuleFinder;", nullptr, 0, $field(Main, moduleFinder)},
	{"MODULE_INFO", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Main, MODULE_INFO)},
	{"MANIFEST_DIR", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Main, MANIFEST_DIR)},
	{"VERSIONS_DIR", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Main, VERSIONS_DIR)},
	{"VERSION", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Main, VERSION)},
	{"VERSIONS_DIR_LENGTH", "I", nullptr, $STATIC | $FINAL, $staticField(Main, VERSIONS_DIR_LENGTH)},
	{"rsrc", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(Main, rsrc)},
	{"useExtractionTime", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Main, useExtractionTime)},
	{"ok", "Z", nullptr, $PRIVATE, $field(Main, ok)},
	{"copyBuf", "[B", nullptr, $PRIVATE, $field(Main, copyBuf)},
	{"jarPaths", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/lang/String;>;", $PRIVATE, $field(Main, jarPaths)},
	{"ENTRYNAME_COMPARATOR", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljava/lang/String;>;", $STATIC, $staticField(Main, ENTRYNAME_COMPARATOR)},
	{"ENTRY_COMPARATOR", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljava/util/zip/ZipEntry;>;", $STATIC, $staticField(Main, ENTRY_COMPARATOR)},
	{}
};

$MethodInfo _Main_MethodInfo_[] = {
	{"<init>", "(Ljava/io/PrintStream;Ljava/io/PrintStream;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Main::*)($PrintStream*,$PrintStream*,$String*)>(&Main::init$))},
	{"<init>", "(Ljava/io/PrintWriter;Ljava/io/PrintWriter;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Main::*)($PrintWriter*,$PrintWriter*,$String*)>(&Main::init$))},
	{"addCreatedBy", "(Ljava/util/jar/Manifest;)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($Manifest*)>(&Main::addCreatedBy))},
	{"addExtendedModuleAttributes", "(Ljava/util/Map;Ljava/util/Set;)V", "(Ljava/util/Map<Ljava/lang/String;[B>;Ljava/util/Set<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(Main::*)($Map*,$Set*)>(&Main::addExtendedModuleAttributes)), "java.io.IOException"},
	{"addFile", "(Ljava/util/zip/ZipOutputStream;Lsun/tools/jar/Main$Entry;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"addIndex", "(Ljdk/internal/util/jar/JarIndex;Ljava/util/zip/ZipOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($JarIndex*,$ZipOutputStream*)>(&Main::addIndex)), "java.io.IOException"},
	{"addMainClass", "(Ljava/util/jar/Manifest;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($Manifest*,$String*)>(&Main::addMainClass))},
	{"addMultiRelease", "(Ljava/util/jar/Manifest;)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($Manifest*)>(&Main::addMultiRelease))},
	{"addPackageIfNamed", "(Ljava/util/Set;Ljava/lang/String;)V", "(Ljava/util/Set<Ljava/lang/String;>;Ljava/lang/String;)V", 0},
	{"addVersion", "(Ljava/util/jar/Manifest;)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($Manifest*)>(&Main::addVersion))},
	{"checkModuleInfo", "([BLjava/util/Set;)Z", "([BLjava/util/Set<Ljava/lang/String;>;)Z", $PRIVATE, $method(static_cast<bool(Main::*)($bytes*,$Set*)>(&Main::checkModuleInfo)), "java.io.IOException"},
	{"copy", "(Ljava/io/InputStream;Ljava/io/OutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($InputStream*,$OutputStream*)>(&Main::copy)), "java.io.IOException"},
	{"copy", "(Ljava/io/File;Ljava/io/OutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($File*,$OutputStream*)>(&Main::copy)), "java.io.IOException"},
	{"copy", "(Ljava/io/InputStream;Ljava/io/File;)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($InputStream*,$File*)>(&Main::copy)), "java.io.IOException"},
	{"crc32File", "(Ljava/util/zip/ZipEntry;Ljava/io/File;)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($ZipEntry*,$File*)>(&Main::crc32File)), "java.io.IOException"},
	{"crc32Manifest", "(Ljava/util/zip/ZipEntry;Ljava/util/jar/Manifest;)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($ZipEntry*,$Manifest*)>(&Main::crc32Manifest)), "java.io.IOException"},
	{"crc32ModuleInfo", "(Ljava/util/zip/ZipEntry;[B)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($ZipEntry*,$bytes*)>(&Main::crc32ModuleInfo)), "java.io.IOException"},
	{"create", "(Ljava/io/OutputStream;Ljava/util/jar/Manifest;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"createTempFileInSameDirectoryAs", "(Ljava/io/File;)Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$File*(*)($File*)>(&Main::createTempFileInSameDirectoryAs)), "java.io.IOException"},
	{"createTemporaryFile", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;", nullptr, $PRIVATE, $method(static_cast<$File*(Main::*)($String*,$String*)>(&Main::createTemporaryFile))},
	{"describeModule", "(Ljava/util/zip/ZipFile;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Main::*)($ZipFile*)>(&Main::describeModule)), "java.io.IOException"},
	{"describeModule", "(Ljava/io/InputStream;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($InputStream*,$String*)>(&Main::describeModule)), "java.io.IOException"},
	{"describeModule", "(Ljava/lang/module/ModuleDescriptor;Ljdk/internal/module/ModuleTarget;Ljdk/internal/module/ModuleHashes;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($ModuleDescriptor*,$ModuleTarget*,$ModuleHashes*,$String*)>(&Main::describeModule)), "java.io.IOException"},
	{"describeModuleFromEntries", "([Lsun/tools/jar/Main$ModuleInfoEntry;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Main::*)($Main$ModuleInfoEntryArray*)>(&Main::describeModuleFromEntries)), "java.io.IOException"},
	{"describeModuleFromStream", "(Ljava/io/FileInputStream;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Main::*)($FileInputStream*)>(&Main::describeModuleFromStream)), "java.io.IOException"},
	{"dumpIndex", "(Ljava/lang/String;Ljdk/internal/util/jar/JarIndex;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"equalsIgnoreCase", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Main::*)($String*,$String*)>(&Main::equalsIgnoreCase))},
	{"error", "(Ljava/lang/String;)V", nullptr, 0},
	{"expand", "()V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)()>(&Main::expand)), "java.io.IOException"},
	{"expand", "(Ljava/io/File;[Ljava/lang/String;Ljava/util/Set;I)V", "(Ljava/io/File;[Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;I)V", $PRIVATE, $method(static_cast<void(Main::*)($File*,$StringArray*,$Set*,int32_t)>(&Main::expand)), "java.io.IOException"},
	{"extendedInfoBytes", "(Ljava/lang/module/ModuleDescriptor;[BLjava/util/Set;)[B", "(Ljava/lang/module/ModuleDescriptor;[BLjava/util/Set<Ljava/lang/String;>;)[B", $PRIVATE, $method(static_cast<$bytes*(Main::*)($ModuleDescriptor*,$bytes*,$Set*)>(&Main::extendedInfoBytes)), "java.io.IOException"},
	{"extract", "(Ljava/io/InputStream;[Ljava/lang/String;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"extract", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"extractFile", "(Ljava/io/InputStream;Ljava/util/zip/ZipEntry;)Ljava/util/zip/ZipEntry;", nullptr, 0, nullptr, "java.io.IOException"},
	{"fatalError", "(Ljava/lang/Exception;)V", nullptr, 0},
	{"fatalError", "(Ljava/lang/String;)V", nullptr, 0},
	{"filesMapToFiles", "(Ljava/util/Map;)[Ljava/lang/String;", "(Ljava/util/Map<Ljava/lang/Integer;[Ljava/lang/String;>;)[Ljava/lang/String;", $PRIVATE, $method(static_cast<$StringArray*(Main::*)($Map*)>(&Main::filesMapToFiles))},
	{"filesToEntryNames", "(Ljava/util/Map$Entry;)Ljava/util/stream/Stream;", "(Ljava/util/Map$Entry<Ljava/lang/Integer;[Ljava/lang/String;>;)Ljava/util/stream/Stream<Ljava/lang/String;>;", 0},
	{"formatMsg", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&Main::formatMsg))},
	{"formatMsg2", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*,$String*,$String*)>(&Main::formatMsg2))},
	{"genIndex", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"getJarPath", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", 0, nullptr, "java.io.IOException"},
	{"getMsg", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&Main::getMsg))},
	{"intVersionFromEntry", "(Lsun/tools/jar/Main$ModuleInfoEntry;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Main$ModuleInfoEntry*)>(&Main::intVersionFromEntry))},
	{"isAmbiguousMainClass", "(Ljava/util/jar/Manifest;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Main::*)($Manifest*)>(&Main::isAmbiguousMainClass))},
	{"isModuleInfoEntry", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&Main::isModuleInfoEntry))},
	{"isWinDriveLetter", "(C)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<bool(*)(char16_t)>(&Main::isWinDriveLetter))},
	{"lambda$checkModuleInfo$25", "(Ljava/util/Set;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Set*,$String*)>(&Main::lambda$checkModuleInfo$25))},
	{"lambda$checkModuleInfo$26", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Main::*)($String*)>(&Main::lambda$checkModuleInfo$26))},
	{"lambda$describeModule$13", "(Ljava/lang/module/ModuleDescriptor$Exports;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($ModuleDescriptor$Exports*)>(&Main::lambda$describeModule$13))},
	{"lambda$describeModule$14", "(Ljava/lang/StringBuilder;Ljava/lang/module/ModuleDescriptor$Exports;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StringBuilder*,$ModuleDescriptor$Exports*)>(&Main::lambda$describeModule$14))},
	{"lambda$describeModule$15", "(Ljava/lang/StringBuilder;Ljava/lang/module/ModuleDescriptor$Requires;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StringBuilder*,$ModuleDescriptor$Requires*)>(&Main::lambda$describeModule$15))},
	{"lambda$describeModule$16", "(Ljava/lang/StringBuilder;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StringBuilder*,$String*)>(&Main::lambda$describeModule$16))},
	{"lambda$describeModule$17", "(Ljava/lang/StringBuilder;Ljava/lang/module/ModuleDescriptor$Provides;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StringBuilder*,$ModuleDescriptor$Provides*)>(&Main::lambda$describeModule$17))},
	{"lambda$describeModule$18", "(Ljava/lang/StringBuilder;Ljava/lang/module/ModuleDescriptor$Exports;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StringBuilder*,$ModuleDescriptor$Exports*)>(&Main::lambda$describeModule$18))},
	{"lambda$describeModule$19", "(Ljava/lang/module/ModuleDescriptor$Opens;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($ModuleDescriptor$Opens*)>(&Main::lambda$describeModule$19))},
	{"lambda$describeModule$20", "(Ljava/lang/StringBuilder;Ljava/lang/module/ModuleDescriptor$Opens;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StringBuilder*,$ModuleDescriptor$Opens*)>(&Main::lambda$describeModule$20))},
	{"lambda$describeModule$21", "(Ljava/lang/StringBuilder;Ljava/lang/module/ModuleDescriptor$Opens;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StringBuilder*,$ModuleDescriptor$Opens*)>(&Main::lambda$describeModule$21))},
	{"lambda$describeModule$22", "(Ljava/lang/StringBuilder;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StringBuilder*,$String*)>(&Main::lambda$describeModule$22))},
	{"lambda$describeModule$23", "(Ljava/lang/StringBuilder;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StringBuilder*,$String*)>(&Main::lambda$describeModule$23))},
	{"lambda$describeModule$24", "(Ljava/lang/StringBuilder;Ljdk/internal/module/ModuleHashes;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StringBuilder*,$ModuleHashes*,$String*)>(&Main::lambda$describeModule$24))},
	{"lambda$describeModule$6", "(Ljava/util/zip/ZipEntry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($ZipEntry*)>(&Main::lambda$describeModule$6))},
	{"lambda$describeModule$7", "(Ljava/util/zip/ZipFile;Ljava/util/zip/ZipEntry;)Lsun/tools/jar/Main$ZipFileModuleInfoEntry;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Main$ZipFileModuleInfoEntry*(*)($ZipFile*,$ZipEntry*)>(&Main::lambda$describeModule$7))},
	{"lambda$describeModule$8", "(I)[Lsun/tools/jar/Main$ZipFileModuleInfoEntry;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Main$ZipFileModuleInfoEntryArray*(*)(int32_t)>(&Main::lambda$describeModule$8))},
	{"lambda$describeModuleFromEntries$10", "(Lsun/tools/jar/Main$ModuleInfoEntry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Main$ModuleInfoEntry*)>(&Main::lambda$describeModuleFromEntries$10))},
	{"lambda$describeModuleFromStream$9", "(I)[Lsun/tools/jar/Main$ModuleInfoEntry;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Main$ModuleInfoEntryArray*(*)(int32_t)>(&Main::lambda$describeModuleFromStream$9))},
	{"lambda$filesMapToFiles$2", "(I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StringArray*(*)(int32_t)>(&Main::lambda$filesMapToFiles$2))},
	{"lambda$filesToEntryNames$3", "(Ljava/util/Set;ILjava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$String*(Main::*)($Set*,int32_t,$String*)>(&Main::lambda$filesToEntryNames$3))},
	{"lambda$replaceFSC$5", "(Ljava/util/Map;Ljava/lang/Integer;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,$Integer*)>(&Main::lambda$replaceFSC$5))},
	{"lambda$run$0", "(Lsun/tools/jar/Main$Entry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Main$Entry*)>(&Main::lambda$run$0))},
	{"lambda$run$1", "(Ljava/util/Set;Ljava/util/Set;Lsun/tools/jar/Main$Entry;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Main::*)($Set*,$Set*,$Main$Entry*)>(&Main::lambda$run$1))},
	{"lambda$static$27", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($String*,$String*)>(&Main::lambda$static$27))},
	{"lambda$toLowerCaseString$11", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)(Object$*)>(&Main::lambda$toLowerCaseString$11))},
	{"lambda$toString$12", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)(Object$*)>(&Main::lambda$toString$12))},
	{"lambda$update$4", "(Ljava/util/Set;Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Main::*)($Set*,$String*)>(&Main::lambda$update$4))},
	{"lessThanEqualReleaseValue", "(Lsun/tools/jar/Main$ModuleInfoEntry;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Main::*)($Main$ModuleInfoEntry*)>(&Main::lessThanEqualReleaseValue))},
	{"list", "(Ljava/io/InputStream;[Ljava/lang/String;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"list", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Main::main))},
	{"newDirSet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/zip/ZipEntry;>;", 0},
	{"output", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"parseArgs", "([Ljava/lang/String;)Z", nullptr, 0},
	{"printEntry", "(Ljava/util/zip/ZipEntry;[Ljava/lang/String;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"printEntry", "(Ljava/util/zip/ZipEntry;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"replaceFSC", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/Integer;[Ljava/lang/String;>;)V", 0},
	{"run", "([Ljava/lang/String;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"safeName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Main::*)($String*)>(&Main::safeName))},
	{"toBinaryName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&Main::toBinaryName))},
	{"toEntryName", "(Ljava/lang/String;Ljava/util/Set;Z)Ljava/lang/String;", "(Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;Z)Ljava/lang/String;", $PRIVATE, $method(static_cast<$String*(Main::*)($String*,$Set*,bool)>(&Main::toEntryName))},
	{"toHex", "([B)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($bytes*)>(&Main::toHex))},
	{"toLowerCaseString", "(Ljava/util/Collection;)Ljava/lang/String;", "<T:Ljava/lang/Object;>(Ljava/util/Collection<TT;>;)Ljava/lang/String;", $STATIC, $method(static_cast<$String*(*)($Collection*)>(&Main::toLowerCaseString))},
	{"toPackageName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&Main::toPackageName))},
	{"toString", "(Ljava/util/Collection;)Ljava/lang/String;", "<T:Ljava/lang/Object;>(Ljava/util/Collection<TT;>;)Ljava/lang/String;", $STATIC, $method(static_cast<$String*(*)($Collection*)>(&Main::toString))},
	{"toUpperCaseASCII", "(C)C", nullptr, $PRIVATE, $method(static_cast<char16_t(Main::*)(char16_t)>(&Main::toUpperCaseASCII))},
	{"toVersionedName", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,int32_t)>(&Main::toVersionedName))},
	{"update", "(Ljava/io/InputStream;Ljava/io/OutputStream;Ljava/io/InputStream;Ljava/util/Map;Ljdk/internal/util/jar/JarIndex;)Z", "(Ljava/io/InputStream;Ljava/io/OutputStream;Ljava/io/InputStream;Ljava/util/Map<Ljava/lang/String;[B>;Ljdk/internal/util/jar/JarIndex;)Z", 0, nullptr, "java.io.IOException"},
	{"updateLastModifiedTime", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/util/zip/ZipEntry;>;)V", 0, nullptr, "java.io.IOException"},
	{"updateManifest", "(Ljava/util/jar/Manifest;Ljava/util/zip/ZipOutputStream;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Main::*)($Manifest*,$ZipOutputStream*)>(&Main::updateManifest)), "java.io.IOException"},
	{"updateModuleInfo", "(Ljava/util/Map;Ljava/util/zip/ZipOutputStream;)V", "(Ljava/util/Map<Ljava/lang/String;[B>;Ljava/util/zip/ZipOutputStream;)V", $PRIVATE, $method(static_cast<void(Main::*)($Map*,$ZipOutputStream*)>(&Main::updateModuleInfo)), "java.io.IOException"},
	{"usageError", "(Ljava/lang/String;)V", nullptr, 0},
	{"validateAndClose", "(Ljava/io/File;)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($File*)>(&Main::validateAndClose)), "java.io.IOException"},
	{"validateJar", "(Ljava/io/File;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Main::*)($File*)>(&Main::validateJar)), "java.io.IOException"},
	{"versionFromEntryName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&Main::versionFromEntryName))},
	{"warn", "(Ljava/lang/String;)V", nullptr, 0},
	{}
};

$InnerClassInfo _Main_InnerClassesInfo_[] = {
	{"sun.tools.jar.Main$Hasher", "sun.tools.jar.Main", "Hasher", $PRIVATE},
	{"sun.tools.jar.Main$StreamedModuleInfoEntry", "sun.tools.jar.Main", "StreamedModuleInfoEntry", $STATIC},
	{"sun.tools.jar.Main$ZipFileModuleInfoEntry", "sun.tools.jar.Main", "ZipFileModuleInfoEntry", $STATIC},
	{"sun.tools.jar.Main$ModuleInfoEntry", "sun.tools.jar.Main", "ModuleInfoEntry", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.tools.jar.Main$CRC32OutputStream", "sun.tools.jar.Main", "CRC32OutputStream", $PRIVATE | $STATIC},
	{"sun.tools.jar.Main$Entry", "sun.tools.jar.Main", "Entry", $PRIVATE | $STATIC},
	{"sun.tools.jar.Main$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Main_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.tools.jar.Main",
	"java.lang.Object",
	nullptr,
	_Main_FieldInfo_,
	_Main_MethodInfo_,
	nullptr,
	nullptr,
	_Main_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.tools.jar.Main$Hasher,sun.tools.jar.Main$Hasher$2,sun.tools.jar.Main$Hasher$1,sun.tools.jar.Main$StreamedModuleInfoEntry,sun.tools.jar.Main$ZipFileModuleInfoEntry,sun.tools.jar.Main$ModuleInfoEntry,sun.tools.jar.Main$CRC32OutputStream,sun.tools.jar.Main$Entry,sun.tools.jar.Main$1"
};

$Object* allocate$Main($Class* clazz) {
	return $of($alloc(Main));
}

bool Main::$assertionsDisabled = false;
$String* Main::MODULE_INFO = nullptr;
$String* Main::MANIFEST_DIR = nullptr;
$String* Main::VERSIONS_DIR = nullptr;
$String* Main::VERSION = nullptr;
int32_t Main::VERSIONS_DIR_LENGTH = 0;
$ResourceBundle* Main::rsrc = nullptr;
bool Main::useExtractionTime = false;
$Comparator* Main::ENTRYNAME_COMPARATOR = nullptr;
$Comparator* Main::ENTRY_COMPARATOR = nullptr;

$String* Main::getMsg($String* key) {
	$init(Main);
	try {
		return ($nc(Main::rsrc)->getString(key));
	} catch ($MissingResourceException& e) {
		$throwNew($Error, "Error in message file"_s, e);
	}
	$shouldNotReachHere();
}

$String* Main::formatMsg($String* key, $String* arg) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$var($String, msg, getMsg(key));
	$var($StringArray, args, $new($StringArray, 1));
	args->set(0, arg);
	return $MessageFormat::format(msg, args);
}

$String* Main::formatMsg2($String* key, $String* arg, $String* arg1) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$var($String, msg, getMsg(key));
	$var($StringArray, args, $new($StringArray, 2));
	args->set(0, arg);
	args->set(1, arg1);
	return $MessageFormat::format(msg, args);
}

void Main::init$($PrintStream* out, $PrintStream* err, $String* program) {
	$set(this, zname, ""_s);
	$set(this, rootjar, nullptr);
	$set(this, entryMap, $new($HashMap));
	$set(this, entries, $new($LinkedHashSet));
	$set(this, moduleInfos, $new($HashMap));
	$set(this, pathsMap, $new($HashMap));
	$set(this, filesMap, $new($HashMap));
	this->releaseValue = -1;
	this->suppressDeprecateMsg = false;
	$set(this, moduleResolution, $ModuleResolution::empty());
	$set(this, moduleFinder, $ModuleFinder::of($$new($PathArray, 0)));
	$set(this, copyBuf, $new($bytes, 8192));
	$set(this, jarPaths, $new($HashSet));
	$set(this, out, $new($PrintWriter, static_cast<$OutputStream*>(out), true));
	$set(this, err, $new($PrintWriter, static_cast<$OutputStream*>(err), true));
	$set(this, program, program);
}

void Main::init$($PrintWriter* out, $PrintWriter* err, $String* program) {
	$set(this, zname, ""_s);
	$set(this, rootjar, nullptr);
	$set(this, entryMap, $new($HashMap));
	$set(this, entries, $new($LinkedHashSet));
	$set(this, moduleInfos, $new($HashMap));
	$set(this, pathsMap, $new($HashMap));
	$set(this, filesMap, $new($HashMap));
	this->releaseValue = -1;
	this->suppressDeprecateMsg = false;
	$set(this, moduleResolution, $ModuleResolution::empty());
	$set(this, moduleFinder, $ModuleFinder::of($$new($PathArray, 0)));
	$set(this, copyBuf, $new($bytes, 8192));
	$set(this, jarPaths, $new($HashSet));
	$set(this, out, out);
	$set(this, err, err);
	$set(this, program, program);
}

$File* Main::createTempFileInSameDirectoryAs($File* file) {
	$init(Main);
	$var($File, dir, $nc(file)->getParentFile());
	if (dir == nullptr) {
		$assign(dir, $new($File, "."_s));
	}
	return $File::createTempFile("jartmp"_s, nullptr, dir);
}

bool Main::run($StringArray* args) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		this->ok = true;
		if (!parseArgs(args)) {
			return false;
		}
		$var($File, tmpFile, nullptr);
		{
			$var($Throwable, var$0, nullptr);
			bool var$2 = false;
			bool return$1 = false;
			try {
				try {
					if (this->cflag || this->uflag) {
						if (this->fname != nullptr) {
							$init($File);
							$set(this, zname, $nc(this->fname)->replace($File::separatorChar, u'/'));
							if ($nc(this->zname)->startsWith("./"_s)) {
								$set(this, zname, $nc(this->zname)->substring(2));
							}
						}
					}
					if (this->cflag) {
						$var($Manifest, manifest, nullptr);
						if (!this->Mflag) {
							if (this->mname != nullptr) {
								{
									$var($InputStream, in, $new($FileInputStream, this->mname));
									{
										$var($Throwable, var$3, nullptr);
										try {
											try {
												$assign(manifest, $new($Manifest, static_cast<$InputStream*>($$new($BufferedInputStream, in))));
											} catch ($Throwable& t$) {
												try {
													in->close();
												} catch ($Throwable& x2) {
													t$->addSuppressed(x2);
												}
												$throw(t$);
											}
										} catch ($Throwable& var$4) {
											$assign(var$3, var$4);
										} /*finally*/ {
											in->close();
										}
										if (var$3 != nullptr) {
											$throw(var$3);
										}
									}
								}
							} else {
								$assign(manifest, $new($Manifest));
							}
							addVersion(manifest);
							addCreatedBy(manifest);
							if (isAmbiguousMainClass(manifest)) {
								var$2 = false;
								return$1 = true;
								goto $finally;
							}
							if (this->ename != nullptr) {
								addMainClass(manifest, this->ename);
							}
							if (this->isMultiRelease) {
								addMultiRelease(manifest);
							}
						}
						expand();
						if (!$nc(this->moduleInfos)->isEmpty()) {
							$var($Set, jentries, $new($HashSet));
							$var($Set, packages, $new($HashSet));
							$nc($($nc($($nc(this->entries)->stream()))->filter(static_cast<$Predicate*>($$new(Main$$Lambda$lambda$run$0$2)))))->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$lambda$run$1$3, this, packages, jentries)));
							addExtendedModuleAttributes(this->moduleInfos, packages);
							if (!checkModuleInfo($cast($bytes, $($nc(this->moduleInfos)->get(Main::MODULE_INFO))), jentries)) {
								var$2 = false;
								return$1 = true;
								goto $finally;
							}
						} else if (this->moduleVersion != nullptr || this->modulesToHash != nullptr) {
							error($(getMsg("error.module.options.without.info"_s)));
							var$2 = false;
							return$1 = true;
							goto $finally;
						}
						if (this->vflag && this->fname == nullptr) {
							this->vflag = false;
						}
						$init($File);
						$var($String, tmpbase, (this->fname == nullptr) ? "tmpjar"_s : $nc(this->fname)->substring($nc(this->fname)->indexOf((int32_t)$File::separatorChar) + 1));
						$assign(tmpFile, createTemporaryFile(tmpbase, ".jar"_s));
						{
							$var($OutputStream, out, $new($FileOutputStream, tmpFile));
							{
								$var($Throwable, var$5, nullptr);
								try {
									try {
										create($$new($BufferedOutputStream, out, 4096), manifest);
									} catch ($Throwable& t$) {
										try {
											out->close();
										} catch ($Throwable& x2) {
											t$->addSuppressed(x2);
										}
										$throw(t$);
									}
								} catch ($Throwable& var$6) {
									$assign(var$5, var$6);
								} /*finally*/ {
									out->close();
								}
								if (var$5 != nullptr) {
									$throw(var$5);
								}
							}
						}
						validateAndClose(tmpFile);
					} else if (this->uflag) {
						$var($File, inputFile, nullptr);
						if (this->fname != nullptr) {
							$assign(inputFile, $new($File, this->fname));
							$assign(tmpFile, createTempFileInSameDirectoryAs(inputFile));
						} else {
							this->vflag = false;
							$assign(tmpFile, createTemporaryFile("tmpjar"_s, ".jar"_s));
						}
						expand();
						{
							$init($FileDescriptor);
							$var($FileInputStream, in, (this->fname != nullptr) ? $new($FileInputStream, inputFile) : $new($FileInputStream, $FileDescriptor::in));
							{
								$var($Throwable, var$7, nullptr);
								try {
									try {
										$var($FileOutputStream, out, $new($FileOutputStream, tmpFile));
										{
											$var($Throwable, var$8, nullptr);
											try {
												try {
													$var($InputStream, manifest, (!this->Mflag && (this->mname != nullptr)) ? (static_cast<$InputStream*>($new($FileInputStream, this->mname))) : ($InputStream*)nullptr);
													{
														$var($Throwable, var$9, nullptr);
														try {
															try {
																bool updateOk = update(in, $$new($BufferedOutputStream, out), manifest, this->moduleInfos, nullptr);
																if (this->ok) {
																	this->ok = updateOk;
																}
															} catch ($Throwable& t$) {
																if (manifest != nullptr) {
																	try {
																		manifest->close();
																	} catch ($Throwable& x2) {
																		t$->addSuppressed(x2);
																	}
																}
																$throw(t$);
															}
														} catch ($Throwable& var$10) {
															$assign(var$9, var$10);
														} /*finally*/ {
															if (manifest != nullptr) {
																manifest->close();
															}
														}
														if (var$9 != nullptr) {
															$throw(var$9);
														}
													}
												} catch ($Throwable& t$) {
													try {
														out->close();
													} catch ($Throwable& x2) {
														t$->addSuppressed(x2);
													}
													$throw(t$);
												}
											} catch ($Throwable& var$11) {
												$assign(var$8, var$11);
											} /*finally*/ {
												out->close();
											}
											if (var$8 != nullptr) {
												$throw(var$8);
											}
										}
									} catch ($Throwable& t$) {
										if (in != nullptr) {
											try {
												in->close();
											} catch ($Throwable& x2) {
												t$->addSuppressed(x2);
											}
										}
										$throw(t$);
									}
								} catch ($Throwable& var$12) {
									$assign(var$7, var$12);
								} /*finally*/ {
									if (in != nullptr) {
										in->close();
									}
								}
								if (var$7 != nullptr) {
									$throw(var$7);
								}
							}
						}
						validateAndClose(tmpFile);
					} else if (this->tflag) {
						replaceFSC(this->filesMap);
						$var($StringArray, files, filesMapToFiles(this->filesMap));
						if (this->fname != nullptr) {
							list(this->fname, files);
						} else {
							$init($FileDescriptor);
							$var($InputStream, in, $new($FileInputStream, $FileDescriptor::in));
							{
								$var($Throwable, var$13, nullptr);
								try {
									list(static_cast<$InputStream*>($$new($BufferedInputStream, in)), files);
								} catch ($Throwable& var$14) {
									$assign(var$13, var$14);
								} /*finally*/ {
									in->close();
								}
								if (var$13 != nullptr) {
									$throw(var$13);
								}
							}
						}
					} else if (this->xflag) {
						replaceFSC(this->filesMap);
						$var($StringArray, files, filesMapToFiles(this->filesMap));
						if (this->fname != nullptr && files != nullptr) {
							extract(this->fname, files);
						} else {
							$init($FileDescriptor);
							$var($InputStream, in, (this->fname == nullptr) ? static_cast<$InputStream*>($new($FileInputStream, $FileDescriptor::in)) : static_cast<$InputStream*>($new($FileInputStream, this->fname)));
							{
								$var($Throwable, var$15, nullptr);
								try {
									if (!extract(static_cast<$InputStream*>($$new($BufferedInputStream, in)), files) && this->fname != nullptr) {
										extract(this->fname, files);
									}
								} catch ($Throwable& var$16) {
									$assign(var$15, var$16);
								} /*finally*/ {
									$nc(in)->close();
								}
								if (var$15 != nullptr) {
									$throw(var$15);
								}
							}
						}
					} else if (this->iflag) {
						$var($StringArray, files, $cast($StringArray, $nc(this->filesMap)->get($($Integer::valueOf(Main::BASE_VERSION)))));
						genIndex(this->rootjar, files);
					} else if (this->dflag) {
						bool found = false;
						if (this->fname != nullptr) {
							{
								$var($ZipFile, zf, $new($ZipFile, this->fname));
								{
									$var($Throwable, var$17, nullptr);
									try {
										try {
											found = describeModule(zf);
										} catch ($Throwable& t$) {
											try {
												zf->close();
											} catch ($Throwable& x2) {
												t$->addSuppressed(x2);
											}
											$throw(t$);
										}
									} catch ($Throwable& var$18) {
										$assign(var$17, var$18);
									} /*finally*/ {
										zf->close();
									}
									if (var$17 != nullptr) {
										$throw(var$17);
									}
								}
							}
						} else {
							{
								$init($FileDescriptor);
								$var($FileInputStream, fin, $new($FileInputStream, $FileDescriptor::in));
								{
									$var($Throwable, var$19, nullptr);
									try {
										try {
											found = describeModuleFromStream(fin);
										} catch ($Throwable& t$) {
											try {
												fin->close();
											} catch ($Throwable& x2) {
												t$->addSuppressed(x2);
											}
											$throw(t$);
										}
									} catch ($Throwable& var$20) {
										$assign(var$19, var$20);
									} /*finally*/ {
										fin->close();
									}
									if (var$19 != nullptr) {
										$throw(var$19);
									}
								}
							}
						}
						if (!found) {
							error($(getMsg("error.module.descriptor.not.found"_s)));
						}
					} else if (this->validate) {
						$var($File, file, nullptr);
						if (this->fname != nullptr) {
							$assign(file, $new($File, this->fname));
						} else {
							$assign(file, createTemporaryFile("tmpJar"_s, ".jar"_s));
							{
								$init($FileDescriptor);
								$var($InputStream, in, $new($FileInputStream, $FileDescriptor::in));
								{
									$var($Throwable, var$21, nullptr);
									try {
										try {
											$Files::copy(in, $($nc(file)->toPath()), $$new($CopyOptionArray, 0));
										} catch ($Throwable& t$) {
											try {
												in->close();
											} catch ($Throwable& x2) {
												t$->addSuppressed(x2);
											}
											$throw(t$);
										}
									} catch ($Throwable& var$22) {
										$assign(var$21, var$22);
									} /*finally*/ {
										in->close();
									}
									if (var$21 != nullptr) {
										$throw(var$21);
									}
								}
							}
						}
						this->ok = validateJar(file);
					}
				} catch ($IOException& e) {
					fatalError(static_cast<$Exception*>(e));
					this->ok = false;
				} catch ($Error& ee) {
					ee->printStackTrace();
					this->ok = false;
				} catch ($Throwable& t) {
					t->printStackTrace();
					this->ok = false;
				}
			} catch ($Throwable& var$23) {
				$assign(var$0, var$23);
			} $finally: {
				if (tmpFile != nullptr && tmpFile->exists()) {
					tmpFile->delete$();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
		$nc(this->out)->flush();
		$nc(this->err)->flush();
		return this->ok;
	}
}

bool Main::validateJar($File* file) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($ZipFile, zf, $new($ZipFile, file));
		{
			$var($Throwable, var$0, nullptr);
			bool var$2 = false;
			bool return$1 = false;
			try {
				try {
					var$2 = $Validator::validate(this, zf);
					return$1 = true;
					goto $finally;
				} catch ($Throwable& t$) {
					try {
						zf->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				zf->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($IOException& e) {
		error($(formatMsg2("error.validator.jarfile.exception"_s, this->fname, $(e->getMessage()))));
		return true;
	}
	$shouldNotReachHere();
}

void Main::validateAndClose($File* tmpfile) {
	$useLocalCurrentObjectStackCache();
	if (this->ok && this->isMultiRelease) {
		this->ok = validateJar(tmpfile);
		if (!this->ok) {
			error($(formatMsg("error.validator.jarfile.invalid"_s, this->fname)));
		}
	}
	$var($Path, path, $nc(tmpfile)->toPath());
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->ok) {
				if (this->fname != nullptr) {
					$init($StandardCopyOption);
					$Files::move(path, $($Paths::get(this->fname, $$new($StringArray, 0))), $$new($CopyOptionArray, {static_cast<$CopyOption*>($StandardCopyOption::REPLACE_EXISTING)}));
				} else {
					$init($FileDescriptor);
					$Files::copy(path, $$new($FileOutputStream, $FileDescriptor::out));
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Files::deleteIfExists(path);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$StringArray* Main::filesMapToFiles($Map* filesMap) {
	$useLocalCurrentObjectStackCache();
	if ($nc(filesMap)->isEmpty()) {
		return nullptr;
	}
	return $fcast($StringArray, $nc($($nc($($nc($($nc(filesMap)->entrySet()))->stream()))->flatMap(static_cast<$Function*>($$new(Main$$Lambda$filesToEntryNames$4, this)))))->toArray(static_cast<$IntFunction*>($$new(Main$$Lambda$lambda$filesMapToFiles$2$5))));
}

$Stream* Main::filesToEntryNames($Map$Entry* fileEntries) {
	$useLocalCurrentObjectStackCache();
	int32_t version = $nc(($cast($Integer, $($nc(fileEntries)->getKey()))))->intValue();
	$var($Set, cpaths, $cast($Set, $nc(this->pathsMap)->get($($Integer::valueOf(version)))));
	return $nc($($Stream::of($cast($StringArray, $(fileEntries->getValue())))))->map(static_cast<$Function*>($$new(Main$$Lambda$lambda$filesToEntryNames$3$6, this, cpaths, version)));
}

bool Main::parseArgs($StringArray* args$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, args, args$renamed);
	try {
		$assign(args, $CommandLine::parse(args));
	} catch ($FileNotFoundException& e) {
		fatalError($(formatMsg("error.cant.open"_s, $(e->getMessage()))));
		return false;
	} catch ($IOException& e) {
		fatalError(static_cast<$Exception*>(e));
		return false;
	}
	int32_t count = 1;
	try {
		$var($String, flags, $nc(args)->get(0));
		bool var$0 = $nc(flags)->startsWith("--"_s);
		if (!var$0) {
			bool var$1 = $nc(flags)->startsWith("-"_s);
			var$0 = (var$1 && flags->length() == 2);
		}
		if (var$0) {
			try {
				count = $GNUStyleOptions::parseOptions(this, args);
			} catch ($GNUStyleOptions$BadArgs& x) {
				if (this->info == nullptr) {
					if (x->showUsage$) {
						usageError($(x->getMessage()));
					} else {
						error($(x->getMessage()));
					}
					return false;
				}
			}
			if (this->info != nullptr) {
				$nc(this->info)->accept(this->out);
				return true;
			}
		} else {
			if (flags->startsWith("-"_s)) {
				$assign(flags, flags->substring(1));
			}
			for (int32_t i = 0; i < flags->length(); ++i) {
				switch (flags->charAt(i)) {
				case u'c':
					{
						if (this->xflag || this->tflag || this->uflag || this->iflag) {
							usageError($(getMsg("error.multiple.main.operations"_s)));
							return false;
						}
						this->cflag = true;
						break;
					}
				case u'u':
					{
						if (this->cflag || this->xflag || this->tflag || this->iflag) {
							usageError($(getMsg("error.multiple.main.operations"_s)));
							return false;
						}
						this->uflag = true;
						break;
					}
				case u'x':
					{
						if (this->cflag || this->uflag || this->tflag || this->iflag) {
							usageError($(getMsg("error.multiple.main.operations"_s)));
							return false;
						}
						this->xflag = true;
						break;
					}
				case u't':
					{
						if (this->cflag || this->uflag || this->xflag || this->iflag) {
							usageError($(getMsg("error.multiple.main.operations"_s)));
							return false;
						}
						this->tflag = true;
						break;
					}
				case u'M':
					{
						this->Mflag = true;
						break;
					}
				case u'v':
					{
						this->vflag = true;
						break;
					}
				case u'f':
					{
						$set(this, fname, args->get(count++));
						break;
					}
				case u'm':
					{
						$set(this, mname, args->get(count++));
						break;
					}
				case u'0':
					{
						this->flag0 = true;
						break;
					}
				case u'i':
					{
						if (this->cflag || this->uflag || this->xflag || this->tflag) {
							usageError($(getMsg("error.multiple.main.operations"_s)));
							return false;
						}
						$set(this, rootjar, args->get(count++));
						this->iflag = true;
						break;
					}
				case u'e':
					{
						$set(this, ename, args->get(count++));
						break;
					}
				case u'P':
					{
						this->pflag = true;
						break;
					}
				default:
					{
						usageError($(formatMsg("error.illegal.option"_s, $($String::valueOf(flags->charAt(i))))));
						return false;
					}
				}
			}
		}
	} catch ($ArrayIndexOutOfBoundsException& e) {
		usageError($(getMsg("main.usage.summary"_s)));
		return false;
	}
	if (!this->cflag && !this->tflag && !this->xflag && !this->uflag && !this->iflag && !this->dflag && !this->validate) {
		usageError($(getMsg("error.bad.option"_s)));
		return false;
	}
	int32_t n = $nc(args)->length - count;
	if (n > 0) {
		int32_t version = Main::BASE_VERSION;
		int32_t k = 0;
		$var($StringArray, nameBuf, $new($StringArray, n));
		$var($Object, var$2, $of($Integer::valueOf(version)));
		$nc(this->pathsMap)->put(var$2, $$new($HashSet));
		try {
			for (int32_t i = count; i < args->length; ++i) {
				if ($nc(args->get(i))->equals("-C"_s)) {
					if (this->dflag) {
						usageError($(getMsg("error.bad.dflag"_s)));
						return false;
					}
					$var($String, dir, args->get(++i));
					$init($File);
					$assign(dir, $nc(dir)->endsWith($File::separator) ? dir : ($str({dir, $File::separator})));
					$assign(dir, $nc(dir)->replace($File::separatorChar, u'/'));
					bool hasUNC = ($File::separatorChar == u'\\' && dir->startsWith("//"_s));
					while (dir->indexOf("//"_s) > -1) {
						$assign(dir, dir->replace(static_cast<$CharSequence*>("//"_s), static_cast<$CharSequence*>("/"_s)));
					}
					if (hasUNC) {
						$assign(dir, $str({"/"_s, dir}));
					}
					$nc(($cast($Set, $($nc(this->pathsMap)->get($($Integer::valueOf(version)))))))->add(dir);
					nameBuf->set(k++, $$str({dir, args->get(++i)}));
				} else if ($nc(args->get(i))->startsWith("--release"_s)) {
					int32_t v = Main::BASE_VERSION;
					try {
						v = $nc($($Integer::valueOf(args->get(++i))))->intValue();
					} catch ($NumberFormatException& x) {
						error($(formatMsg("error.release.value.notnumber"_s, args->get(i))));
					}
					if (v < 9) {
						usageError($(formatMsg("error.release.value.toosmall"_s, $($String::valueOf(v)))));
						return false;
					}
					if (k > 0) {
						$var($StringArray, files, $new($StringArray, k));
						$System::arraycopy(nameBuf, 0, files, 0, k);
						$nc(this->filesMap)->put($($Integer::valueOf(version)), files);
						this->isMultiRelease = version > Main::BASE_VERSION;
					}
					k = 0;
					$assign(nameBuf, $new($StringArray, n));
					version = v;
					this->releaseValue = version;
					$var($Object, var$3, $of($Integer::valueOf(version)));
					$nc(this->pathsMap)->put(var$3, $$new($HashSet));
				} else {
					if (this->dflag) {
						usageError($(getMsg("error.bad.dflag"_s)));
						return false;
					}
					nameBuf->set(k++, args->get(i));
				}
			}
		} catch ($ArrayIndexOutOfBoundsException& e) {
			usageError($(getMsg("error.bad.file.arg"_s)));
			return false;
		}
		if (k > 0) {
			$var($StringArray, files, $new($StringArray, k));
			$System::arraycopy(nameBuf, 0, files, 0, k);
			$nc(this->filesMap)->put($($Integer::valueOf(version)), files);
			this->isMultiRelease = version > Main::BASE_VERSION;
		}
	} else if (this->cflag && (this->mname == nullptr)) {
		usageError($(getMsg("error.bad.cflag"_s)));
		return false;
	} else if (this->uflag) {
		if ((this->mname != nullptr) || (this->ename != nullptr) || this->moduleVersion != nullptr) {
			return true;
		} else {
			usageError($(getMsg("error.bad.uflag"_s)));
			return false;
		}
	}
	return true;
}

void Main::addPackageIfNamed($Set* packages, $String* name$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	if ($nc(name)->startsWith(Main::VERSIONS_DIR)) {
		int32_t i0 = Main::VERSIONS_DIR_LENGTH;
		int32_t i = name->indexOf((int32_t)u'/', i0);
		if (i <= 0) {
			warn($(formatMsg("warn.release.unexpected.versioned.entry"_s, name)));
			return;
		}
		while (i0 < i) {
			char16_t c = name->charAt(i0);
			if (c < u'0' || c > u'9') {
				warn($(formatMsg("warn.release.unexpected.versioned.entry"_s, name)));
				return;
			}
			++i0;
		}
		$assign(name, name->substring(i + 1, name->length()));
	}
	$var($String, pn, toPackageName(name));
	if ($Checks::isPackageName(pn)) {
		$nc(packages)->add(pn);
	}
}

$String* Main::toEntryName($String* name$renamed, $Set* cpaths, bool isDir) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	$init($File);
	$assign(name, $nc(name)->replace($File::separatorChar, u'/'));
	if (isDir) {
		$assign(name, name->endsWith("/"_s) ? name : $str({name, "/"_s}));
	}
	$var($String, matchPath, ""_s);
	{
		$var($Iterator, i$, $nc(cpaths)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, path, $cast($String, i$->next()));
			{
				bool var$0 = name->startsWith(path);
				if (var$0) {
					int32_t var$1 = $nc(path)->length();
					var$0 = var$1 > $nc(matchPath)->length();
				}
				if (var$0) {
					$assign(matchPath, path);
				}
			}
		}
	}
	$assign(name, safeName($(name->substring($nc(matchPath)->length()))));
	if (name->startsWith("./"_s)) {
		$assign(name, name->substring(2));
	}
	return name;
}

$String* Main::toVersionedName($String* name, int32_t version) {
	$init(Main);
	return version > Main::BASE_VERSION ? $str({Main::VERSIONS_DIR, $$str(version), "/"_s, name}) : name;
}

$String* Main::toPackageName($String* path) {
	$init(Main);
	int32_t index = $nc(path)->lastIndexOf((int32_t)u'/');
	if (index != -1) {
		return $(path->substring(0, index))->replace(u'/', u'.');
	} else {
		return ""_s;
	}
}

void Main::expand() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->filesMap)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			int32_t version = $nc(($cast($Integer, $(i$->next()))))->intValue();
			{
				$var($StringArray, files, $cast($StringArray, $nc(this->filesMap)->get($($Integer::valueOf(version)))));
				expand(nullptr, files, $cast($Set, $($nc(this->pathsMap)->get($($Integer::valueOf(version))))), version);
			}
		}
	}
}

void Main::expand($File* dir, $StringArray* files, $Set* cpaths, int32_t version) {
	$useLocalCurrentObjectStackCache();
	if (files == nullptr) {
		return;
	}
	for (int32_t i = 0; i < $nc(files)->length; ++i) {
		$var($File, f, nullptr);
		if (dir == nullptr) {
			$assign(f, $new($File, files->get(i)));
		} else {
			$assign(f, $new($File, dir, files->get(i)));
		}
		bool isDir = $nc(f)->isDirectory();
		$var($String, name, toEntryName($(f->getPath()), cpaths, isDir));
		if (version != Main::BASE_VERSION) {
			if ($nc(name)->startsWith(Main::VERSIONS_DIR)) {
				error($(formatMsg2("error.release.unexpected.versioned.entry"_s, name, $($String::valueOf(version)))));
				this->ok = false;
				return;
			}
			$assign(name, toVersionedName(name, version));
		}
		if (f->isFile()) {
			$var($Main$Entry, e, $new($Main$Entry, f, name, false));
			if (isModuleInfoEntry(name)) {
				$nc(this->moduleInfos)->putIfAbsent(name, $($Files::readAllBytes($(f->toPath()))));
				if (this->uflag) {
					$nc(this->entryMap)->put(name, e);
				}
			} else if ($nc(this->entries)->add(e)) {
				if (this->uflag) {
					$nc(this->entryMap)->put(name, e);
				}
			}
		} else if (isDir) {
			$var($Main$Entry, e, $new($Main$Entry, f, name, true));
			if ($nc(this->entries)->add(e)) {
				if ($nc(this->entryMap)->containsKey(name)) {
					$nc(this->entries)->remove(e);
				} else {
					$nc(this->entryMap)->put(name, e);
				}
				expand(f, $(f->list()), cpaths, version);
			}
		} else {
			error($(formatMsg("error.nosuch.fileordir"_s, $($String::valueOf($of(f))))));
			this->ok = false;
		}
	}
}

void Main::create($OutputStream* out, $Manifest* manifest) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ZipOutputStream, zos, $new($JarOutputStream, out));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					if (this->flag0) {
						zos->setMethod($ZipOutputStream::STORED);
					}
					if (manifest != nullptr) {
						if (this->vflag) {
							output($(getMsg("out.added.manifest"_s)));
						}
						$var($ZipEntry, e, $new($ZipEntry, Main::MANIFEST_DIR));
						e->setTime($System::currentTimeMillis());
						e->setSize(0);
						e->setCrc(0);
						zos->putNextEntry(e);
						$assign(e, $new($ZipEntry, "META-INF/MANIFEST.MF"_s));
						e->setTime($System::currentTimeMillis());
						if (this->flag0) {
							crc32Manifest(e, manifest);
						}
						zos->putNextEntry(e);
						manifest->write(zos);
						zos->closeEntry();
					}
					updateModuleInfo(this->moduleInfos, zos);
					{
						$var($Iterator, i$, $nc(this->entries)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Main$Entry, entry, $cast($Main$Entry, i$->next()));
							{
								addFile(zos, entry);
							}
						}
					}
				} catch ($Throwable& t$) {
					try {
						zos->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				zos->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

char16_t Main::toUpperCaseASCII(char16_t c) {
	return (c < u'a' || c > u'z') ? c : (char16_t)(c + u'A' - u'a');
}

bool Main::equalsIgnoreCase($String* s, $String* upper) {
	$init($Locale);
	if (!Main::$assertionsDisabled && !$($nc(upper)->toUpperCase($Locale::ENGLISH))->equals(upper)) {
		$throwNew($AssertionError);
	}
	int32_t len = 0;
	int32_t var$0 = (len = $nc(s)->length());
	if (var$0 != $nc(upper)->length()) {
		return false;
	}
	for (int32_t i = 0; i < len; ++i) {
		char16_t c1 = $nc(s)->charAt(i);
		char16_t c2 = $nc(upper)->charAt(i);
		if (c1 != c2 && toUpperCaseASCII(c1) != c2) {
			return false;
		}
	}
	return true;
}

bool Main::update($InputStream* in, $OutputStream* out, $InputStream* newManifest, $Map* moduleInfos, $JarIndex* jarIndex) {
	$useLocalCurrentObjectStackCache();
	$var($ZipInputStream, zis, $new($ZipInputStream, in));
	$var($ZipOutputStream, zos, $new($JarOutputStream, out));
	$var($ZipEntry, e, nullptr);
	bool foundManifest = false;
	bool updateOk = true;
	$var($Set, jentries, $new($HashSet));
	if (jarIndex != nullptr) {
		addIndex(jarIndex, zos);
	}
	while (($assign(e, zis->getNextEntry())) != nullptr) {
		$var($String, name, $nc(e)->getName());
		bool isManifestEntry = equalsIgnoreCase(name, "META-INF/MANIFEST.MF"_s);
		bool isModuleInfoEntry = Main::isModuleInfoEntry(name);
		if ((jarIndex != nullptr && equalsIgnoreCase(name, "META-INF/INDEX.LIST"_s)) || (this->Mflag && isManifestEntry)) {
			continue;
		} else if (isManifestEntry && ((newManifest != nullptr) || (this->ename != nullptr) || this->isMultiRelease)) {
			foundManifest = true;
			if (newManifest != nullptr) {
				{
					$var($FileInputStream, fis, $new($FileInputStream, this->mname));
					{
						$var($Throwable, var$0, nullptr);
						bool var$2 = false;
						bool return$1 = false;
						try {
							try {
								if (isAmbiguousMainClass($$new($Manifest, static_cast<$InputStream*>(fis)))) {
									var$2 = false;
									return$1 = true;
									goto $finally;
								}
							} catch ($Throwable& t$) {
								try {
									fis->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$3) {
							$assign(var$0, var$3);
						} $finally: {
							fis->close();
						}
						if (var$0 != nullptr) {
							$throw(var$0);
						}
						if (return$1) {
							return var$2;
						}
					}
				}
			}
			$var($Manifest, old, $new($Manifest, static_cast<$InputStream*>(zis)));
			if (newManifest != nullptr) {
				old->read(newManifest);
			}
			if (!updateManifest(old, zos)) {
				return false;
			}
		} else if (moduleInfos != nullptr && isModuleInfoEntry) {
			moduleInfos->putIfAbsent(name, $(zis->readAllBytes()));
		} else {
			bool isDir = e->isDirectory();
			if (!$nc(this->entryMap)->containsKey(name)) {
				$var($ZipEntry, e2, $new($ZipEntry, name));
				e2->setMethod(e->getMethod());
				e2->setTime(e->getTime());
				e2->setComment($(e->getComment()));
				e2->setExtra($(e->getExtra()));
				if (e->getMethod() == $ZipEntry::STORED) {
					e2->setSize(e->getSize());
					e2->setCrc(e->getCrc());
				}
				zos->putNextEntry(e2);
				copy(static_cast<$InputStream*>(zis), static_cast<$OutputStream*>(zos));
			} else {
				$var($Main$Entry, ent, $cast($Main$Entry, $nc(this->entryMap)->get(name)));
				addFile(zos, ent);
				$nc(this->entryMap)->remove(name);
				$nc(this->entries)->remove(ent);
				isDir = $nc(ent)->isDir;
			}
			if (!isDir) {
				jentries->add(name);
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->entries)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Main$Entry, entry, $cast($Main$Entry, i$->next()));
			{
				addFile(zos, entry);
				if (!$nc(entry)->isDir) {
					jentries->add(entry->name);
				}
			}
		}
	}
	if (!foundManifest) {
		if (newManifest != nullptr) {
			$var($Manifest, m, $new($Manifest, newManifest));
			updateOk = !isAmbiguousMainClass(m);
			if (updateOk) {
				if (!updateManifest(m, zos)) {
					updateOk = false;
				}
			}
		} else if (this->ename != nullptr) {
			if (!updateManifest($$new($Manifest), zos)) {
				updateOk = false;
			}
		}
	}
	if (updateOk) {
		if (moduleInfos != nullptr && !moduleInfos->isEmpty()) {
			$var($Set, pkgs, $new($HashSet));
			jentries->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$lambda$update$4$7, this, pkgs)));
			addExtendedModuleAttributes(moduleInfos, pkgs);
			updateOk = checkModuleInfo($cast($bytes, $(moduleInfos->get(Main::MODULE_INFO))), jentries);
			updateModuleInfo(moduleInfos, zos);
		} else if (this->moduleVersion != nullptr || this->modulesToHash != nullptr) {
			error($(getMsg("error.module.options.without.info"_s)));
			updateOk = false;
		}
	}
	zis->close();
	zos->close();
	return updateOk;
}

void Main::addIndex($JarIndex* index, $ZipOutputStream* zos) {
	$useLocalCurrentObjectStackCache();
	$var($ZipEntry, e, $new($ZipEntry, "META-INF/INDEX.LIST"_s));
	e->setTime($System::currentTimeMillis());
	if (this->flag0) {
		$var($Main$CRC32OutputStream, os, $new($Main$CRC32OutputStream));
		$nc(index)->write(os);
		os->updateEntry(e);
	}
	$nc(zos)->putNextEntry(e);
	$nc(index)->write(zos);
	zos->closeEntry();
}

void Main::updateModuleInfo($Map* moduleInfos, $ZipOutputStream* zos) {
	$useLocalCurrentObjectStackCache();
	$var($String, fmt, this->uflag ? "out.update.module-info"_s : "out.added.module-info"_s);
	{
		$var($Iterator, i$, $nc($($nc(moduleInfos)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, mi, $cast($Map$Entry, i$->next()));
			{
				$var($String, name, $cast($String, $nc(mi)->getKey()));
				$var($bytes, bytes, $cast($bytes, mi->getValue()));
				$var($ZipEntry, e, $new($ZipEntry, name));
				e->setTime($System::currentTimeMillis());
				if (this->flag0) {
					crc32ModuleInfo(e, bytes);
				}
				$nc(zos)->putNextEntry(e);
				zos->write(bytes);
				zos->closeEntry();
				if (this->vflag) {
					output($(formatMsg(fmt, name)));
				}
			}
		}
	}
}

bool Main::updateManifest($Manifest* m, $ZipOutputStream* zos) {
	$useLocalCurrentObjectStackCache();
	addVersion(m);
	addCreatedBy(m);
	if (this->ename != nullptr) {
		addMainClass(m, this->ename);
	}
	if (this->isMultiRelease) {
		addMultiRelease(m);
	}
	$var($ZipEntry, e, $new($ZipEntry, "META-INF/MANIFEST.MF"_s));
	e->setTime($System::currentTimeMillis());
	if (this->flag0) {
		crc32Manifest(e, m);
	}
	$nc(zos)->putNextEntry(e);
	$nc(m)->write(zos);
	if (this->vflag) {
		output($(getMsg("out.update.manifest"_s)));
	}
	return true;
}

bool Main::isWinDriveLetter(char16_t c) {
	$init(Main);
	return ((c >= u'a') && (c <= u'z')) || ((c >= u'A') && (c <= u'Z'));
}

$String* Main::safeName($String* name$renamed) {
	$var($String, name, name$renamed);
	if (!this->pflag) {
		int32_t len = $nc(name)->length();
		int32_t i = name->lastIndexOf("../"_s);
		if (i == -1) {
			i = 0;
		} else {
			i += 3;
		}
		$init($File);
		if ($File::separatorChar == u'\\') {
			while (i < len) {
				int32_t off = i;
				bool var$0 = i + 1 < len && name->charAt(i + 1) == u':';
				if (var$0 && isWinDriveLetter(name->charAt(i))) {
					i += 2;
				}
				while (i < len && name->charAt(i) == u'/') {
					++i;
				}
				if (i == off) {
					break;
				}
			}
		} else {
			while (i < len && name->charAt(i) == u'/') {
				++i;
			}
		}
		if (i != 0) {
			$assign(name, name->substring(i));
		}
	}
	return name;
}

void Main::addVersion($Manifest* m) {
	$var($Attributes, global, $nc(m)->getMainAttributes());
	$init($Attributes$Name);
	if ($nc(global)->getValue($Attributes$Name::MANIFEST_VERSION) == nullptr) {
		global->put($Attributes$Name::MANIFEST_VERSION, Main::VERSION);
	}
}

void Main::addCreatedBy($Manifest* m) {
	$useLocalCurrentObjectStackCache();
	$var($Attributes, global, $nc(m)->getMainAttributes());
	if ($nc(global)->getValue($$new($Attributes$Name, "Created-By"_s)) == nullptr) {
		$var($String, javaVendor, $System::getProperty("java.vendor"_s));
		$var($String, jdkVersion, $System::getProperty("java.version"_s));
		global->put($$new($Attributes$Name, "Created-By"_s), $$str({jdkVersion, " ("_s, javaVendor, ")"_s}));
	}
}

void Main::addMainClass($Manifest* m, $String* mainApp) {
	$var($Attributes, global, $nc(m)->getMainAttributes());
	$init($Attributes$Name);
	$nc(global)->put($Attributes$Name::MAIN_CLASS, mainApp);
}

void Main::addMultiRelease($Manifest* m) {
	$var($Attributes, global, $nc(m)->getMainAttributes());
	$init($Attributes$Name);
	$nc(global)->put($Attributes$Name::MULTI_RELEASE, "true"_s);
}

bool Main::isAmbiguousMainClass($Manifest* m) {
	$useLocalCurrentObjectStackCache();
	if (this->ename != nullptr) {
		$var($Attributes, global, $nc(m)->getMainAttributes());
		$init($Attributes$Name);
		if ($nc(global)->get($Attributes$Name::MAIN_CLASS) != nullptr) {
			usageError($(getMsg("error.bad.eflag"_s)));
			return true;
		}
	}
	return false;
}

void Main::addFile($ZipOutputStream* zos, $Main$Entry* entry) {
	$useLocalCurrentObjectStackCache();
	$var($File, file, $nc(entry)->file);
	$var($String, name, entry->name);
	bool isDir = entry->isDir;
	bool var$1 = $nc(name)->isEmpty();
	bool var$0 = var$1 || $nc(name)->equals("."_s);
	if (var$0 || $nc(name)->equals(this->zname)) {
		return;
	} else {
		bool var$3 = name->equals(Main::MANIFEST_DIR);
		if ((var$3 || name->equals("META-INF/MANIFEST.MF"_s)) && !this->Mflag) {
			if (this->vflag) {
				output($(formatMsg("out.ignore.entry"_s, name)));
			}
			return;
		} else if (name->equals(Main::MODULE_INFO)) {
			$throwNew($Error, $$str({"Unexpected module info: "_s, name}));
		}
	}
	int64_t size = isDir ? (int64_t)0 : $nc(file)->length();
	if (this->vflag) {
		$nc(this->out)->print($(formatMsg("out.adding"_s, name)));
	}
	$var($ZipEntry, e, $new($ZipEntry, name));
	e->setTime(file->lastModified());
	if (size == 0) {
		e->setMethod($ZipEntry::STORED);
		e->setSize(0);
		e->setCrc(0);
	} else if (this->flag0) {
		crc32File(e, file);
	}
	$nc(zos)->putNextEntry(e);
	if (!isDir) {
		copy(file, static_cast<$OutputStream*>(zos));
	}
	zos->closeEntry();
	if (this->vflag) {
		size = e->getSize();
		int64_t csize = e->getCompressedSize();
		$var($String, var$4, "out.size"_s);
		$var($String, var$5, $String::valueOf(size));
		$nc(this->out)->print($(formatMsg2(var$4, var$5, $($String::valueOf(csize)))));
		if (e->getMethod() == $ZipEntry::DEFLATED) {
			int64_t ratio = 0;
			if (size != 0) {
				ratio = $div(((size - csize) * 100), size);
			}
			output($(formatMsg("out.deflated"_s, $($String::valueOf(ratio)))));
		} else {
			output($(getMsg("out.stored"_s)));
		}
	}
}

void Main::copy($InputStream* from, $OutputStream* to) {
	int32_t n = 0;
	while ((n = $nc(from)->read(this->copyBuf)) != -1) {
		$nc(to)->write(this->copyBuf, 0, n);
	}
}

void Main::copy($File* from, $OutputStream* to) {
	$useLocalCurrentObjectStackCache();
	{
		$var($InputStream, in, $new($FileInputStream, from));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					copy(in, to);
				} catch ($Throwable& t$) {
					try {
						in->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				in->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void Main::copy($InputStream* from, $File* to) {
	$useLocalCurrentObjectStackCache();
	{
		$var($OutputStream, out, $new($FileOutputStream, to));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					copy(from, out);
				} catch ($Throwable& t$) {
					try {
						out->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				out->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void Main::crc32ModuleInfo($ZipEntry* e, $bytes* bytes) {
	$useLocalCurrentObjectStackCache();
	$var($Main$CRC32OutputStream, os, $new($Main$CRC32OutputStream));
	$var($ByteArrayInputStream, in, $new($ByteArrayInputStream, bytes));
	in->transferTo(os);
	os->updateEntry(e);
}

void Main::crc32Manifest($ZipEntry* e, $Manifest* m) {
	$var($Main$CRC32OutputStream, os, $new($Main$CRC32OutputStream));
	$nc(m)->write(os);
	os->updateEntry(e);
}

void Main::crc32File($ZipEntry* e, $File* f) {
	$useLocalCurrentObjectStackCache();
	$var($Main$CRC32OutputStream, os, $new($Main$CRC32OutputStream));
	copy(f, static_cast<$OutputStream*>(os));
	if (os->n != $nc(f)->length()) {
		$throwNew($JarException, $(formatMsg("error.incorrect.length"_s, $(f->getPath()))));
	}
	os->updateEntry(e);
}

void Main::replaceFSC($Map* filesMap) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(filesMap)->keySet()))->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$lambda$replaceFSC$5$8, filesMap)));
}

$Set* Main::newDirSet() {
	return $new($Main$1, this);
}

void Main::updateLastModifiedTime($Set* zes) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(zes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ZipEntry, ze, $cast($ZipEntry, i$->next()));
			{
				int64_t lastModified = $nc(ze)->getTime();
				if (lastModified != -1) {
					$init($File);
					$var($String, name, safeName($($nc($(ze->getName()))->replace($File::separatorChar, u'/'))));
					if ($nc(name)->length() != 0) {
						$var($File, f, $new($File, $(name->replace(u'/', $File::separatorChar))));
						f->setLastModified(lastModified);
					}
				}
			}
		}
	}
}

bool Main::extract($InputStream* in, $StringArray* files) {
	$useLocalCurrentObjectStackCache();
	$var($ZipInputStream, zis, $new($ZipInputStream, in));
	$var($ZipEntry, e, nullptr);
	bool entriesFound = false;
	$var($Set, dirs, newDirSet());
	while (($assign(e, zis->getNextEntry())) != nullptr) {
		entriesFound = true;
		if (files == nullptr) {
			$nc(dirs)->add($(extractFile(zis, e)));
		} else {
			$var($String, name, $nc(e)->getName());
			{
				$var($StringArray, arr$, files);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, file, arr$->get(i$));
					{
						if ($nc(name)->startsWith(file)) {
							$nc(dirs)->add($(extractFile(zis, e)));
							break;
						}
					}
				}
			}
		}
	}
	updateLastModifiedTime(dirs);
	return entriesFound;
}

void Main::extract($String* fname, $StringArray* files) {
	$useLocalCurrentObjectStackCache();
	$var($ZipFile, zf, $new($ZipFile, fname));
	$var($Set, dirs, newDirSet());
	$var($Enumeration, zes, zf->entries());
	while ($nc(zes)->hasMoreElements()) {
		$var($ZipEntry, e, $cast($ZipEntry, zes->nextElement()));
		if (files == nullptr) {
			$nc(dirs)->add($(extractFile($(zf->getInputStream(e)), e)));
		} else {
			$var($String, name, $nc(e)->getName());
			{
				$var($StringArray, arr$, files);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, file, arr$->get(i$));
					{
						if ($nc(name)->startsWith(file)) {
							$nc(dirs)->add($(extractFile($(zf->getInputStream(e)), e)));
							break;
						}
					}
				}
			}
		}
	}
	zf->close();
	updateLastModifiedTime(dirs);
}

$ZipEntry* Main::extractFile($InputStream* is, $ZipEntry* e) {
	$useLocalCurrentObjectStackCache();
	$var($ZipEntry, rc, nullptr);
	$init($File);
	$var($String, name, safeName($($nc($($nc(e)->getName()))->replace($File::separatorChar, u'/'))));
	if ($nc(name)->length() == 0) {
		return rc;
	}
	$var($File, f, $new($File, $($nc(name)->replace(u'/', $File::separatorChar))));
	if ($nc(e)->isDirectory()) {
		if (f->exists()) {
			if (!f->isDirectory()) {
				$throwNew($IOException, $(formatMsg("error.create.dir"_s, $(f->getPath()))));
			}
		} else if (!f->mkdirs()) {
			$throwNew($IOException, $(formatMsg("error.create.dir"_s, $(f->getPath()))));
		} else {
			$assign(rc, e);
		}
		if (this->vflag) {
			output($(formatMsg("out.create"_s, name)));
		}
	} else {
		if (f->getParent() != nullptr) {
			$var($File, d, $new($File, $(f->getParent())));
			bool var$1 = !d->exists();
			bool var$0 = var$1 && !d->mkdirs();
			if (var$0 || !d->isDirectory()) {
				$throwNew($IOException, $(formatMsg("error.create.dir"_s, $(d->getPath()))));
			}
		}
		{
			$var($Throwable, var$2, nullptr);
			try {
				copy(is, f);
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				if ($instanceOf($ZipInputStream, is)) {
					$nc(($cast($ZipInputStream, is)))->closeEntry();
				} else {
					$nc(is)->close();
				}
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
		if (this->vflag) {
			if (e->getMethod() == $ZipEntry::DEFLATED) {
				output($(formatMsg("out.inflated"_s, name)));
			} else {
				output($(formatMsg("out.extracted"_s, name)));
			}
		}
	}
	if (!Main::useExtractionTime) {
		int64_t lastModified = $nc(e)->getTime();
		if (lastModified != -1) {
			f->setLastModified(lastModified);
		}
	}
	return rc;
}

void Main::list($InputStream* in, $StringArray* files) {
	$useLocalCurrentObjectStackCache();
	$var($ZipInputStream, zis, $new($ZipInputStream, in));
	$var($ZipEntry, e, nullptr);
	while (($assign(e, zis->getNextEntry())) != nullptr) {
		zis->closeEntry();
		printEntry(e, files);
	}
}

void Main::list($String* fname, $StringArray* files) {
	$useLocalCurrentObjectStackCache();
	$var($ZipFile, zf, $new($ZipFile, fname));
	$var($Enumeration, zes, zf->entries());
	while ($nc(zes)->hasMoreElements()) {
		printEntry($cast($ZipEntry, $(zes->nextElement())), files);
	}
	zf->close();
}

void Main::dumpIndex($String* rootjar, $JarIndex* index) {
	$useLocalCurrentObjectStackCache();
	$var($File, jarFile, $new($File, rootjar));
	$var($Path, jarPath, jarFile->toPath());
	$var($Path, tmpPath, $nc($(createTempFileInSameDirectoryAs(jarFile)))->toPath());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($InputStream, var$1, $Files::newInputStream(jarPath, $$new($OpenOptionArray, 0)));
			if (update(var$1, $($Files::newOutputStream(tmpPath, $$new($OpenOptionArray, 0))), nullptr, nullptr, index)) {
				try {
					$init($StandardCopyOption);
					$Files::move(tmpPath, jarPath, $$new($CopyOptionArray, {static_cast<$CopyOption*>($StandardCopyOption::REPLACE_EXISTING)}));
				} catch ($IOException& e) {
					$throwNew($IOException, $(getMsg("error.write.file"_s)), e);
				}
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$Files::deleteIfExists(tmpPath);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$List* Main::getJarPath($String* jar) {
	$useLocalCurrentObjectStackCache();
	$var($List, files, $new($ArrayList));
	files->add(jar);
	$nc(this->jarPaths)->add(jar);
	$var($String, path, $nc(jar)->substring(0, $Math::max(0, jar->lastIndexOf((int32_t)u'/') + 1)));
	$init($File);
	$var($JarFile, rf, $new($JarFile, $(jar->replace(u'/', $File::separatorChar))));
	if (rf != nullptr) {
		$var($Manifest, man, rf->getManifest());
		if (man != nullptr) {
			$var($Attributes, attr, man->getMainAttributes());
			if (attr != nullptr) {
				$init($Attributes$Name);
				$var($String, value, attr->getValue($Attributes$Name::CLASS_PATH));
				if (value != nullptr) {
					$var($StringTokenizer, st, $new($StringTokenizer, value));
					while (st->hasMoreTokens()) {
						$var($String, ajar, st->nextToken());
						if (!$nc(ajar)->endsWith("/"_s)) {
							$assign(ajar, path->concat(ajar));
							if (!$nc(this->jarPaths)->contains(ajar)) {
								files->addAll($(getJarPath(ajar)));
							}
						}
					}
				}
			}
		}
	}
	rf->close();
	return files;
}

void Main::genIndex($String* rootjar, $StringArray* files) {
	$useLocalCurrentObjectStackCache();
	$var($List, jars, getJarPath(rootjar));
	int32_t njars = $nc(jars)->size();
	$var($StringArray, jarfiles, nullptr);
	if (njars == 1 && files != nullptr) {
		for (int32_t i = 0; i < files->length; ++i) {
			jars->addAll($(getJarPath(files->get(i))));
		}
		njars = jars->size();
	}
	$assign(jarfiles, $fcast($StringArray, jars->toArray($$new($StringArray, njars))));
	$var($JarIndex, index, $new($JarIndex, jarfiles));
	dumpIndex(rootjar, index);
}

void Main::printEntry($ZipEntry* e, $StringArray* files) {
	$useLocalCurrentObjectStackCache();
	if (files == nullptr) {
		printEntry(e);
	} else {
		$var($String, name, $nc(e)->getName());
		{
			$var($StringArray, arr$, files);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, file, arr$->get(i$));
				{
					if ($nc(name)->startsWith(file)) {
						printEntry(e);
						return;
					}
				}
			}
		}
	}
}

void Main::printEntry($ZipEntry* e) {
	$useLocalCurrentObjectStackCache();
	if (this->vflag) {
		$var($StringBuilder, sb, $new($StringBuilder));
		$var($String, s, $Long::toString($nc(e)->getSize()));
		for (int32_t i = 6 - $nc(s)->length(); i > 0; --i) {
			sb->append(u' ');
		}
		sb->append(s)->append(u' ')->append($($$new($Date, $nc(e)->getTime())->toString()));
		sb->append(u' ')->append($($nc(e)->getName()));
		output($(sb->toString()));
	} else {
		output($($nc(e)->getName()));
	}
}

void Main::usageError($String* s) {
	$nc(this->err)->println(s);
	$nc(this->err)->println($(getMsg("main.usage.summary.try"_s)));
}

void Main::fatalError($Exception* e) {
	$nc(e)->printStackTrace();
}

void Main::fatalError($String* s) {
	error($$str({this->program, ": "_s, s}));
}

void Main::output($String* s) {
	$nc(this->out)->println(s);
}

void Main::error($String* s) {
	$nc(this->err)->println(s);
}

void Main::warn($String* s) {
	$nc(this->err)->println(s);
}

void Main::main($StringArray* args) {
	$init(Main);
	$var(Main, jartool, $new(Main, $System::out, $System::err, "jar"_s));
	$System::exit(jartool->run(args) ? 0 : 1);
}

$File* Main::createTemporaryFile($String* tmpbase, $String* suffix) {
	$useLocalCurrentObjectStackCache();
	$var($File, tmpfile, nullptr);
	try {
		$assign(tmpfile, $File::createTempFile(tmpbase, suffix));
	} catch ($IOException& e) {
	} catch ($SecurityException& e) {
	}
	if (tmpfile == nullptr) {
		if (this->fname != nullptr) {
			try {
				$var($File, tmpfolder, $nc($($$new($File, this->fname)->getAbsoluteFile()))->getParentFile());
				$assign(tmpfile, $File::createTempFile(this->fname, $$str({".tmp"_s, suffix}), tmpfolder));
			} catch ($IOException& ioe) {
				fatalError(static_cast<$Exception*>(ioe));
			}
		} else {
			fatalError(static_cast<$Exception*>($$new($IOException, $(getMsg("error.create.tempfile"_s)))));
		}
	}
	return tmpfile;
}

bool Main::describeModule($ZipFile* zipFile) {
	$useLocalCurrentObjectStackCache();
	$var($Main$ZipFileModuleInfoEntryArray, infos, $fcast($Main$ZipFileModuleInfoEntryArray, $nc($($nc($($nc($($nc($($nc(zipFile)->stream()))->filter(static_cast<$Predicate*>($$new(Main$$Lambda$lambda$describeModule$6$9)))))->sorted(Main::ENTRY_COMPARATOR)))->map(static_cast<$Function*>($$new(Main$$Lambda$lambda$describeModule$7$10, zipFile)))))->toArray(static_cast<$IntFunction*>($$new(Main$$Lambda$lambda$describeModule$8$11)))));
	if ($nc(infos)->length == 0) {
		$var($String, fn, zipFile->getName());
		$var($ModuleFinder, mf, $ModuleFinder::of($$new($PathArray, {$($Paths::get(fn, $$new($StringArray, 0)))})));
		try {
			$var($Set, mref, $nc(mf)->findAll());
			if ($nc(mref)->isEmpty()) {
				output($(formatMsg("error.unable.derive.automodule"_s, fn)));
				return true;
			}
			$var($ModuleDescriptor, md, $nc(($cast($ModuleReference, $($nc($($nc(mref)->iterator()))->next()))))->descriptor());
			output($$str({$(getMsg("out.automodule"_s)), "\n"_s}));
			describeModule(md, nullptr, nullptr, ""_s);
		} catch ($FindException& e) {
			$var($String, msg, formatMsg("error.unable.derive.automodule"_s, fn));
			$var($Throwable, t, e->getCause());
			if (t != nullptr) {
				$assign(msg, $str({msg, "\n"_s, $(t->getMessage())}));
			}
			output(msg);
		}
	} else {
		return describeModuleFromEntries($fcast($Main$ModuleInfoEntryArray, infos));
	}
	return true;
}

bool Main::describeModuleFromStream($FileInputStream* fis) {
	$useLocalCurrentObjectStackCache();
	$var($List, infos, $new($LinkedList));
	{
		$var($BufferedInputStream, bis, $new($BufferedInputStream, fis));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($ZipInputStream, zis, $new($ZipInputStream, bis));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$var($ZipEntry, e, nullptr);
								while (($assign(e, zis->getNextEntry())) != nullptr) {
									$var($String, ename, $nc(e)->getName());
									if (isModuleInfoEntry(ename)) {
										infos->add($$new($Main$StreamedModuleInfoEntry, ename, $(zis->readAllBytes())));
									}
								}
							} catch ($Throwable& t$) {
								try {
									zis->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							zis->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					try {
						bis->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				bis->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	if (infos->size() == 0) {
		return false;
	}
	$var($Main$ModuleInfoEntryArray, sorted, $fcast($Main$ModuleInfoEntryArray, $nc($($nc($(infos->stream()))->sorted($($Comparator::comparing(static_cast<$Function*>($$new(Main$$Lambda$name$12)), Main::ENTRYNAME_COMPARATOR)))))->toArray(static_cast<$IntFunction*>($$new(Main$$Lambda$lambda$describeModuleFromStream$9$13)))));
	return describeModuleFromEntries(sorted);
}

bool Main::lessThanEqualReleaseValue($Main$ModuleInfoEntry* entry) {
	return intVersionFromEntry(entry) <= this->releaseValue ? true : false;
}

$String* Main::versionFromEntryName($String* name) {
	$init(Main);
	$var($String, s, $nc(name)->substring(Main::VERSIONS_DIR_LENGTH));
	return s->substring(0, s->indexOf("/"_s));
}

int32_t Main::intVersionFromEntry($Main$ModuleInfoEntry* entry) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(entry)->name());
	if (!$nc(name)->startsWith(Main::VERSIONS_DIR)) {
		return Main::BASE_VERSION;
	}
	$var($String, s, $nc(name)->substring(Main::VERSIONS_DIR_LENGTH));
	$assign(s, s->substring(0, s->indexOf((int32_t)u'/')));
	return $nc($($Integer::valueOf(s)))->intValue();
}

bool Main::describeModuleFromEntries($Main$ModuleInfoEntryArray* infos) {
	$useLocalCurrentObjectStackCache();
	if (!Main::$assertionsDisabled && !($nc(infos)->length > 0)) {
		$throwNew($AssertionError);
	}
	$var($String, releases, $cast($String, $nc($($nc($($nc($($nc($($Arrays::stream(infos)))->filter(static_cast<$Predicate*>($$new(Main$$Lambda$lambda$describeModuleFromEntries$10$14)))))->map(static_cast<$Function*>($$new(Main$$Lambda$name$12)))))->map(static_cast<$Function*>($$new(Main$$Lambda$versionFromEntryName$15)))))->collect($($Collectors::joining(" "_s)))));
	if (!$nc(releases)->isEmpty()) {
		output($$str({"releases: "_s, releases, "\n"_s}));
	}
	if (this->releaseValue != -1) {
		$var($Main$ModuleInfoEntry, entry, nullptr);
		int32_t i = 0;
		while (i < $nc(infos)->length && lessThanEqualReleaseValue(infos->get(i))) {
			$assign(entry, infos->get(i));
			++i;
		}
		if (entry == nullptr) {
			output($(formatMsg("error.no.operative.descriptor"_s, $($String::valueOf(this->releaseValue)))));
			return false;
		}
		$var($String, uriString, $cast($String, $nc($($nc(entry)->uriString()))->orElse(""_s)));
		{
			$var($InputStream, is, entry->bytes());
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						describeModule(is, uriString);
					} catch ($Throwable& t$) {
						if (is != nullptr) {
							try {
								is->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (is != nullptr) {
						is->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	} else if ($nc($($nc($nc(infos)->get(0))->name()))->equals(Main::MODULE_INFO)) {
		$var($String, uriString, $cast($String, $nc($($nc(infos->get(0))->uriString()))->orElse(""_s)));
		{
			$var($InputStream, is, $nc(infos->get(0))->bytes());
			{
				$var($Throwable, var$2, nullptr);
				try {
					try {
						describeModule(is, uriString);
					} catch ($Throwable& t$) {
						if (is != nullptr) {
							try {
								is->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$2, var$3);
				} /*finally*/ {
					if (is != nullptr) {
						is->close();
					}
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		}
	} else {
		output($(getMsg("error.no.root.descriptor"_s)));
	}
	return true;
}

$String* Main::toLowerCaseString($Collection* set) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	if ($nc(set)->isEmpty()) {
		return ""_s;
	}
	return $str({" "_s, $cast($String, $($nc($($nc($($nc($($nc(set)->stream()))->map(static_cast<$Function*>($$new(Main$$Lambda$lambda$toLowerCaseString$11$16)))))->sorted()))->collect($($Collectors::joining(" "_s)))))});
}

$String* Main::toString($Collection* set) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	if ($nc(set)->isEmpty()) {
		return ""_s;
	}
	return $str({" "_s, $cast($String, $($nc($($nc($($nc($($nc(set)->stream()))->map(static_cast<$Function*>($$new(Main$$Lambda$lambda$toString$12$17)))))->sorted()))->collect($($Collectors::joining(" "_s)))))});
}

void Main::describeModule($InputStream* entryInputStream, $String* uriString) {
	$useLocalCurrentObjectStackCache();
	$var($ModuleInfo$Attributes, attrs, $ModuleInfo::read(entryInputStream, ($Supplier*)nullptr));
	$var($ModuleDescriptor, md, $nc(attrs)->descriptor());
	$var($ModuleTarget, target, attrs->target());
	$var($ModuleHashes, hashes, attrs->recordedHashes());
	describeModule(md, target, hashes, uriString);
}

void Main::describeModule($ModuleDescriptor* md, $ModuleTarget* target, $ModuleHashes* hashes, $String* uriString) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($nc(md)->toNameAndVersion()));
	if (!$nc(uriString)->isEmpty()) {
		sb->append(" "_s)->append(uriString);
	}
	if ($nc(md)->isOpen()) {
		sb->append(" open"_s);
	}
	if ($nc(md)->isAutomatic()) {
		sb->append(" automatic"_s);
	}
	sb->append("\n"_s);
	$nc($($nc($($nc($($nc($($nc(md)->exports()))->stream()))->sorted($($Comparator::comparing(static_cast<$Function*>($$new(Main$$Lambda$source$18)))))))->filter(static_cast<$Predicate*>($$new(Main$$Lambda$lambda$describeModule$13$19)))))->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$lambda$describeModule$14$20, sb)));
	$nc($($nc($($nc($(md->requires()))->stream()))->sorted()))->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$lambda$describeModule$15$21, sb)));
	$nc($($nc($($nc($(md->uses()))->stream()))->sorted()))->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$lambda$describeModule$16$22, sb)));
	$nc($($nc($($nc($(md->provides()))->stream()))->sorted($($Comparator::comparing(static_cast<$Function*>($$new(Main$$Lambda$service$23)))))))->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$lambda$describeModule$17$24, sb)));
	$nc($($nc($($nc($($nc($(md->exports()))->stream()))->sorted($($Comparator::comparing(static_cast<$Function*>($$new(Main$$Lambda$source$18)))))))->filter(static_cast<$Predicate*>($$new(Main$$Lambda$isQualified$25)))))->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$lambda$describeModule$18$26, sb)));
	$nc($($nc($($nc($($nc($(md->opens()))->stream()))->sorted($($Comparator::comparing(static_cast<$Function*>($$new(Main$$Lambda$source$27)))))))->filter(static_cast<$Predicate*>($$new(Main$$Lambda$lambda$describeModule$19$28)))))->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$lambda$describeModule$20$29, sb)));
	$nc($($nc($($nc($($nc($(md->opens()))->stream()))->sorted($($Comparator::comparing(static_cast<$Function*>($$new(Main$$Lambda$source$27)))))))->filter(static_cast<$Predicate*>($$new(Main$$Lambda$isQualified$30)))))->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$lambda$describeModule$21$31, sb)));
	$var($Set, concealed, static_cast<$Set*>(static_cast<$AbstractSet*>($new($TreeSet, $(static_cast<$Collection*>(md->packages()))))));
	$nc($($nc($($nc($(md->exports()))->stream()))->map(static_cast<$Function*>($$new(Main$$Lambda$source$18)))))->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$remove$32, static_cast<$Set*>(concealed))));
	$nc($($nc($($nc($(md->opens()))->stream()))->map(static_cast<$Function*>($$new(Main$$Lambda$source$27)))))->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$remove$32, static_cast<$Set*>(concealed))));
	concealed->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$lambda$describeModule$22$33, sb)));
	$nc($(md->mainClass()))->ifPresent(static_cast<$Consumer*>($$new(Main$$Lambda$lambda$describeModule$23$34, sb)));
	if (target != nullptr) {
		$var($String, targetPlatform, target->targetPlatform());
		if (!$nc(targetPlatform)->isEmpty()) {
			sb->append("platform "_s)->append(targetPlatform)->append("\n"_s);
		}
	}
	if (hashes != nullptr) {
		$nc($($nc($($nc($(hashes->names()))->stream()))->sorted()))->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$lambda$describeModule$24$35, sb, hashes)));
	}
	output($(sb->toString()));
}

$String* Main::toHex($bytes* ba) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, $nc(ba)->length << 1));
	{
		$var($bytes, arr$, ba);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int8_t b = arr$->get(i$);
			{
				sb->append($($String::format("%02x"_s, $$new($ObjectArray, {$($of($Integer::valueOf((int32_t)(b & (uint32_t)255))))}))));
			}
		}
	}
	return sb->toString();
}

$String* Main::toBinaryName($String* classname) {
	$init(Main);
	return $str({($($nc(classname)->replace(u'.', u'/'))), ".class"_s});
}

bool Main::checkModuleInfo($bytes* moduleInfoBytes, $Set* entries) {
	$useLocalCurrentObjectStackCache();
	bool ok = true;
	if (moduleInfoBytes != nullptr) {
		try {
			$var($ModuleDescriptor, md, $ModuleDescriptor::read($($ByteBuffer::wrap(moduleInfoBytes))));
			if ($nc($($nc($($nc($($nc($($nc($($nc($($nc(md)->provides()))->stream()))->map(static_cast<$Function*>($$new(Main$$Lambda$providers$36)))))->flatMap(static_cast<$Function*>($$new(Main$$Lambda$stream$37)))))->filter(static_cast<$Predicate*>($$new(Main$$Lambda$lambda$checkModuleInfo$25$38, entries)))))->peek(static_cast<$Consumer*>($$new(Main$$Lambda$lambda$checkModuleInfo$26$39, this)))))->count() != 0) {
				ok = false;
			}
		} catch ($InvalidModuleDescriptorException& x) {
			fatalError($(x->getMessage()));
			ok = false;
		}
	}
	return ok;
}

void Main::addExtendedModuleAttributes($Map* moduleInfos, $Set* packages) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(moduleInfos)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$var($ModuleDescriptor, md, $ModuleDescriptor::read($($ByteBuffer::wrap($cast($bytes, $($nc(e)->getValue()))))));
				$nc(e)->setValue($(extendedInfoBytes(md, $cast($bytes, $(e->getValue())), packages)));
			}
		}
	}
}

bool Main::isModuleInfoEntry($String* name) {
	$init(Main);
	if ($nc(name)->endsWith(Main::MODULE_INFO)) {
		int32_t var$0 = name->length();
		int32_t end = var$0 - $nc(Main::MODULE_INFO)->length();
		if (end == 0) {
			return true;
		}
		if (name->startsWith(Main::VERSIONS_DIR)) {
			int32_t off = Main::VERSIONS_DIR_LENGTH;
			if (off == end) {
				return false;
			}
			while (off < end - 1) {
				char16_t c = name->charAt(off++);
				if (c < u'0' || c > u'9') {
					return false;
				}
			}
			return name->charAt(off) == u'/';
		}
	}
	return false;
}

$bytes* Main::extendedInfoBytes($ModuleDescriptor* md, $bytes* miBytes, $Set* packages) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	$var($InputStream, is, $new($ByteArrayInputStream, miBytes));
	$var($ModuleInfoExtender, extender, $ModuleInfoExtender::newExtender(is));
	$nc(extender)->packages(packages);
	if (this->ename != nullptr) {
		extender->mainClass(this->ename);
	}
	if (this->moduleVersion != nullptr) {
		extender->version(this->moduleVersion);
	}
	if (this->modulesToHash != nullptr) {
		$var($String, mn, $nc(md)->name());
		$var($Main$Hasher, hasher, $new($Main$Hasher, this, md, this->fname));
		$var($ModuleHashes, moduleHashes, hasher->computeHashes(mn));
		if (moduleHashes != nullptr) {
			extender->hashes(moduleHashes);
		} else {
			warn($$str({"warning: no module is recorded in hash in "_s, mn}));
		}
	}
	if ($nc(this->moduleResolution)->value() != 0) {
		extender->moduleResolution(this->moduleResolution);
	}
	extender->write(baos);
	return baos->toByteArray();
}

int32_t Main::lambda$static$27($String* s1, $String* s2) {
	$init(Main);
	if ($nc(s1)->equals(s2)) {
		return 0;
	}
	bool b1 = $nc(s1)->startsWith(Main::VERSIONS_DIR);
	bool b2 = $nc(s2)->startsWith(Main::VERSIONS_DIR);
	if (b1 && !b2) {
		return 1;
	}
	if (!b1 && b2) {
		return -1;
	}
	int32_t n = 0;
	if (b1 && b2) {
		n = $nc(Main::VERSIONS_DIR)->length();
		int32_t i1 = s1->indexOf((int32_t)u'/', n);
		int32_t i2 = s2->indexOf((int32_t)u'/', n);
		if (i1 == -1) {
			$throwNew($Validator$InvalidJarException, s1);
		}
		if (i2 == -1) {
			$throwNew($Validator$InvalidJarException, s2);
		}
		if (i1 != i2) {
			return i1 - i2;
		}
	}
	int32_t l1 = s1->length();
	int32_t l2 = s2->length();
	int32_t lim = $Math::min(l1, l2);
	for (int32_t k = n; k < lim; ++k) {
		char16_t c1 = s1->charAt(k);
		char16_t c2 = s2->charAt(k);
		if (c1 != c2) {
			if (c1 == u'$' && c2 == u'.') {
				return 1;
			}
			if (c1 == u'.' && c2 == u'$') {
				return -1;
			}
			return c1 - c2;
		}
	}
	return l1 - l2;
}

void Main::lambda$checkModuleInfo$26($String* p) {
	fatalError($(formatMsg("error.missing.provider"_s, p)));
}

bool Main::lambda$checkModuleInfo$25($Set* entries, $String* p) {
	$init(Main);
	return !$nc(entries)->contains($(toBinaryName(p)));
}

void Main::lambda$describeModule$24($StringBuilder* sb, $ModuleHashes* hashes, $String* mod) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$nc(sb)->append("hashes "_s)->append(mod)->append(" "_s)->append($($nc(hashes)->algorithm()))->append(" "_s)->append($(toHex($($nc(hashes)->hashFor(mod)))))->append("\n"_s);
}

void Main::lambda$describeModule$23($StringBuilder* sb, $String* v) {
	$init(Main);
	$nc(sb)->append("main-class "_s)->append(v)->append("\n"_s);
}

void Main::lambda$describeModule$22($StringBuilder* sb, $String* p) {
	$init(Main);
	$nc(sb)->append("contains "_s)->append(p)->append("\n"_s);
}

void Main::lambda$describeModule$21($StringBuilder* sb, $ModuleDescriptor$Opens* o) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$nc(sb)->append("qualified opens "_s)->append($($nc(o)->source()))->append($(toLowerCaseString($($nc(o)->modifiers()))))->append(" to"_s)->append($(toLowerCaseString($($nc(o)->targets()))))->append("\n"_s);
}

void Main::lambda$describeModule$20($StringBuilder* sb, $ModuleDescriptor$Opens* o) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$nc(sb)->append("opens "_s)->append($($nc(o)->source()))->append($(toLowerCaseString($($nc(o)->modifiers()))))->append("\n"_s);
}

bool Main::lambda$describeModule$19($ModuleDescriptor$Opens* o) {
	$init(Main);
	return !$nc(o)->isQualified();
}

void Main::lambda$describeModule$18($StringBuilder* sb, $ModuleDescriptor$Exports* e) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$nc(sb)->append("qualified exports "_s)->append($($nc(e)->source()))->append(" to"_s)->append($(toLowerCaseString($($nc(e)->targets()))))->append("\n"_s);
}

void Main::lambda$describeModule$17($StringBuilder* sb, $ModuleDescriptor$Provides* p) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$nc(sb)->append("provides "_s)->append($($nc(p)->service()))->append(" with"_s)->append($(toString($($nc(p)->providers()))))->append("\n"_s);
}

void Main::lambda$describeModule$16($StringBuilder* sb, $String* s) {
	$init(Main);
	$nc(sb)->append("uses "_s)->append(s)->append("\n"_s);
}

void Main::lambda$describeModule$15($StringBuilder* sb, $ModuleDescriptor$Requires* r) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$nc(sb)->append("requires "_s)->append($($nc(r)->name()))->append($(toLowerCaseString($($nc(r)->modifiers()))))->append("\n"_s);
}

void Main::lambda$describeModule$14($StringBuilder* sb, $ModuleDescriptor$Exports* e) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$nc(sb)->append("exports "_s)->append($($nc(e)->source()))->append($(toLowerCaseString($($nc(e)->modifiers()))))->append("\n"_s);
}

bool Main::lambda$describeModule$13($ModuleDescriptor$Exports* e) {
	$init(Main);
	return !$nc(e)->isQualified();
}

$String* Main::lambda$toString$12(Object$* e) {
	$init(Main);
	return $nc($of(e))->toString();
}

$String* Main::lambda$toLowerCaseString$11(Object$* e) {
	$init(Main);
	$init($Locale);
	return $nc($($nc($of(e))->toString()))->toLowerCase($Locale::ROOT);
}

bool Main::lambda$describeModuleFromEntries$10($Main$ModuleInfoEntry* e) {
	$init(Main);
	return !$nc($($nc(e)->name()))->equals(Main::MODULE_INFO);
}

$Main$ModuleInfoEntryArray* Main::lambda$describeModuleFromStream$9(int32_t x$0) {
	$init(Main);
	return $new($Main$ModuleInfoEntryArray, x$0);
}

$Main$ZipFileModuleInfoEntryArray* Main::lambda$describeModule$8(int32_t x$0) {
	$init(Main);
	return $new($Main$ZipFileModuleInfoEntryArray, x$0);
}

$Main$ZipFileModuleInfoEntry* Main::lambda$describeModule$7($ZipFile* zipFile, $ZipEntry* e) {
	$init(Main);
	return $new($Main$ZipFileModuleInfoEntry, zipFile, e);
}

bool Main::lambda$describeModule$6($ZipEntry* e) {
	$init(Main);
	return isModuleInfoEntry($($nc(e)->getName()));
}

void Main::lambda$replaceFSC$5($Map* filesMap, $Integer* version) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, files, $cast($StringArray, $nc(filesMap)->get(version)));
	if (files != nullptr) {
		for (int32_t i = 0; i < files->length; ++i) {
			$init($File);
			files->set(i, $($nc(files->get(i))->replace($File::separatorChar, u'/')));
		}
	}
}

void Main::lambda$update$4($Set* pkgs, $String* je) {
	addPackageIfNamed(pkgs, je);
}

$String* Main::lambda$filesToEntryNames$3($Set* cpaths, int32_t version, $String* f) {
	return toVersionedName($(toEntryName(f, cpaths, false)), version);
}

$StringArray* Main::lambda$filesMapToFiles$2(int32_t x$0) {
	$init(Main);
	return $new($StringArray, x$0);
}

void Main::lambda$run$1($Set* packages, $Set* jentries, $Main$Entry* e) {
	addPackageIfNamed(packages, $nc(e)->name);
	$nc(jentries)->add($nc(e)->name);
}

bool Main::lambda$run$0($Main$Entry* e) {
	$init(Main);
	return !$nc(e)->isDir;
}

void clinit$Main($Class* class$) {
	$assignStatic(Main::MODULE_INFO, "module-info.class"_s);
	$assignStatic(Main::MANIFEST_DIR, "META-INF/"_s);
	$assignStatic(Main::VERSIONS_DIR, $str({Main::MANIFEST_DIR, "versions/"_s}));
	$assignStatic(Main::VERSION, "1.0"_s);
	$beforeCallerSensitive();
	Main::$assertionsDisabled = !Main::class$->desiredAssertionStatus();
	Main::VERSIONS_DIR_LENGTH = $nc(Main::VERSIONS_DIR)->length();
	Main::useExtractionTime = $Boolean::getBoolean("sun.tools.jar.useExtractionTime"_s);
	{
		try {
			$assignStatic(Main::rsrc, $ResourceBundle::getBundle("sun.tools.jar.resources.jar"_s));
		} catch ($MissingResourceException& e) {
			$throwNew($Error, "Fatal: Resource for jar is missing"_s);
		}
	}
	$assignStatic(Main::ENTRYNAME_COMPARATOR, static_cast<$Comparator*>($new(Main$$Lambda$lambda$static$27)));
	$assignStatic(Main::ENTRY_COMPARATOR, $Comparator::comparing(static_cast<$Function*>($$new(Main$$Lambda$getName$1)), Main::ENTRYNAME_COMPARATOR));
}

Main::Main() {
}

$Class* Main::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Main$$Lambda$lambda$static$27::classInfo$.name)) {
			return Main$$Lambda$lambda$static$27::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$getName$1::classInfo$.name)) {
			return Main$$Lambda$getName$1::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$run$0$2::classInfo$.name)) {
			return Main$$Lambda$lambda$run$0$2::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$run$1$3::classInfo$.name)) {
			return Main$$Lambda$lambda$run$1$3::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$filesToEntryNames$4::classInfo$.name)) {
			return Main$$Lambda$filesToEntryNames$4::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$filesMapToFiles$2$5::classInfo$.name)) {
			return Main$$Lambda$lambda$filesMapToFiles$2$5::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$filesToEntryNames$3$6::classInfo$.name)) {
			return Main$$Lambda$lambda$filesToEntryNames$3$6::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$update$4$7::classInfo$.name)) {
			return Main$$Lambda$lambda$update$4$7::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$replaceFSC$5$8::classInfo$.name)) {
			return Main$$Lambda$lambda$replaceFSC$5$8::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModule$6$9::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModule$6$9::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModule$7$10::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModule$7$10::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModule$8$11::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModule$8$11::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$name$12::classInfo$.name)) {
			return Main$$Lambda$name$12::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModuleFromStream$9$13::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModuleFromStream$9$13::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModuleFromEntries$10$14::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModuleFromEntries$10$14::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$versionFromEntryName$15::classInfo$.name)) {
			return Main$$Lambda$versionFromEntryName$15::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$toLowerCaseString$11$16::classInfo$.name)) {
			return Main$$Lambda$lambda$toLowerCaseString$11$16::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$toString$12$17::classInfo$.name)) {
			return Main$$Lambda$lambda$toString$12$17::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$source$18::classInfo$.name)) {
			return Main$$Lambda$source$18::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModule$13$19::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModule$13$19::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModule$14$20::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModule$14$20::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModule$15$21::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModule$15$21::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModule$16$22::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModule$16$22::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$service$23::classInfo$.name)) {
			return Main$$Lambda$service$23::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModule$17$24::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModule$17$24::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$isQualified$25::classInfo$.name)) {
			return Main$$Lambda$isQualified$25::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModule$18$26::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModule$18$26::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$source$27::classInfo$.name)) {
			return Main$$Lambda$source$27::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModule$19$28::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModule$19$28::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModule$20$29::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModule$20$29::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$isQualified$30::classInfo$.name)) {
			return Main$$Lambda$isQualified$30::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModule$21$31::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModule$21$31::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$remove$32::classInfo$.name)) {
			return Main$$Lambda$remove$32::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModule$22$33::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModule$22$33::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModule$23$34::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModule$23$34::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$describeModule$24$35::classInfo$.name)) {
			return Main$$Lambda$lambda$describeModule$24$35::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$providers$36::classInfo$.name)) {
			return Main$$Lambda$providers$36::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$stream$37::classInfo$.name)) {
			return Main$$Lambda$stream$37::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$checkModuleInfo$25$38::classInfo$.name)) {
			return Main$$Lambda$lambda$checkModuleInfo$25$38::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$checkModuleInfo$26$39::classInfo$.name)) {
			return Main$$Lambda$lambda$checkModuleInfo$26$39::load$(name, initialize);
		}
	}
	$loadClass(Main, name, initialize, &_Main_ClassInfo_, clinit$Main, allocate$Main);
	return class$;
}

$Class* Main::class$ = nullptr;

		} // jar
	} // tools
} // sun