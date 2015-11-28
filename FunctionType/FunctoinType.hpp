#if !defined(FUNCTION_TYPE__CCT)
#define FUNCTION_TYPE__CCT
namespace cct {

    template<typename T >
    class FunctionType {
    };

    template<
        typename ReturnType
    >
    class FunctionType< ReturnType() > {
    public:
        typedef ReturnType return_type;
        typedef void _0;
        typedef ReturnType(*function_type)();
        typedef ReturnType(std_function_type)();
        enum { arg_size=1 };
    };

    template<
        typename ReturnType
    >
    class FunctionType< ReturnType(*)() > {
    public:
        typedef ReturnType return_type;
        typedef void _0;
        typedef ReturnType(*function_type)();
        typedef ReturnType(std_function_type)();
        enum { arg_size=1 };
    };

    template<
        typename ReturnType,
        typename ClassType
    >
    class FunctionType< ReturnType(ClassType::*)() > {
    public:
        typedef ReturnType return_type;
        typedef void _0;
        typedef ReturnType(ClassType::* function_type)();
        typedef ReturnType(std_function_type)(ClassType *);
        typedef ClassType class_type;
        enum { arg_size=1 };
    };

    template<
        typename ReturnType,
        typename Arg0
    >
    class FunctionType< ReturnType(
        Arg0) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef ReturnType(*function_type)(
            Arg0);
        typedef ReturnType(std_function_type)(
            Arg0);
        enum { arg_size=1 };
    };

    template<
        typename ReturnType,
        typename Arg0
    >
    class FunctionType< ReturnType(*)(
        Arg0) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef ReturnType(*function_type)(
            Arg0);
        typedef ReturnType(std_function_type)(
            Arg0);
        enum { arg_size=1 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef ReturnType(ClassType::* function_type)(
            Arg0);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0);
        typedef ClassType class_type;
        enum { arg_size=1 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1);
        enum { arg_size=2 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1);
        enum { arg_size=2 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1);
        typedef ClassType class_type;
        enum { arg_size=2 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2);
        enum { arg_size=3 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2);
        enum { arg_size=3 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2);
        typedef ClassType class_type;
        enum { arg_size=3 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3);
        enum { arg_size=4 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3);
        enum { arg_size=4 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3);
        typedef ClassType class_type;
        enum { arg_size=4 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4);
        enum { arg_size=5 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4);
        enum { arg_size=5 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4);
        typedef ClassType class_type;
        enum { arg_size=5 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5);
        enum { arg_size=6 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5);
        enum { arg_size=6 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5);
        typedef ClassType class_type;
        enum { arg_size=6 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6);
        enum { arg_size=7 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6);
        enum { arg_size=7 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6);
        typedef ClassType class_type;
        enum { arg_size=7 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7);
        enum { arg_size=8 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7);
        enum { arg_size=8 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7);
        typedef ClassType class_type;
        enum { arg_size=8 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8);
        enum { arg_size=9 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8);
        enum { arg_size=9 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8);
        typedef ClassType class_type;
        enum { arg_size=9 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9);
        enum { arg_size=10 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9);
        enum { arg_size=10 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9);
        typedef ClassType class_type;
        enum { arg_size=10 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10);
        enum { arg_size=11 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10);
        enum { arg_size=11 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10);
        typedef ClassType class_type;
        enum { arg_size=11 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11);
        enum { arg_size=12 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11);
        enum { arg_size=12 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11);
        typedef ClassType class_type;
        enum { arg_size=12 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12);
        enum { arg_size=13 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12);
        enum { arg_size=13 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12);
        typedef ClassType class_type;
        enum { arg_size=13 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13);
        enum { arg_size=14 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13);
        enum { arg_size=14 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13);
        typedef ClassType class_type;
        enum { arg_size=14 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14);
        enum { arg_size=15 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14);
        enum { arg_size=15 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14);
        typedef ClassType class_type;
        enum { arg_size=15 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15);
        enum { arg_size=16 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15);
        enum { arg_size=16 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15);
        typedef ClassType class_type;
        enum { arg_size=16 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16);
        enum { arg_size=17 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16);
        enum { arg_size=17 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16);
        typedef ClassType class_type;
        enum { arg_size=17 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17);
        enum { arg_size=18 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17);
        enum { arg_size=18 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17);
        typedef ClassType class_type;
        enum { arg_size=18 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18);
        enum { arg_size=19 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18);
        enum { arg_size=19 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18);
        typedef ClassType class_type;
        enum { arg_size=19 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19
    >
    class FunctionType< ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19);
        enum { arg_size=20 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19
    >
    class FunctionType< ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19);
        enum { arg_size=20 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19
    >
    class FunctionType< ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19) > {
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19);
        typedef ClassType class_type;
        enum { arg_size=20 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20);
        enum { arg_size=21 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20);
        enum { arg_size=21 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20);
        typedef ClassType class_type;
        enum { arg_size=21 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21);
        enum { arg_size=22 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21);
        enum { arg_size=22 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21);
        typedef ClassType class_type;
        enum { arg_size=22 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22);
        enum { arg_size=23 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22);
        enum { arg_size=23 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22);
        typedef ClassType class_type;
        enum { arg_size=23 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23);
        enum { arg_size=24 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23);
        enum { arg_size=24 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23);
        typedef ClassType class_type;
        enum { arg_size=24 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24);
        enum { arg_size=25 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24);
        enum { arg_size=25 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24);
        typedef ClassType class_type;
        enum { arg_size=25 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25);
        enum { arg_size=26 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25);
        enum { arg_size=26 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25);
        typedef ClassType class_type;
        enum { arg_size=26 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26);
        enum { arg_size=27 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26);
        enum { arg_size=27 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26);
        typedef ClassType class_type;
        enum { arg_size=27 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27);
        enum { arg_size=28 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27);
        enum { arg_size=28 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27);
        typedef ClassType class_type;
        enum { arg_size=28 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28);
        enum { arg_size=29 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28);
        enum { arg_size=29 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28);
        typedef ClassType class_type;
        enum { arg_size=29 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29);
        enum { arg_size=30 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29);
        enum { arg_size=30 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29);
        typedef ClassType class_type;
        enum { arg_size=30 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30);
        enum { arg_size=31 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30);
        enum { arg_size=31 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30);
        typedef ClassType class_type;
        enum { arg_size=31 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30,
        typename Arg31
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef Arg31 _31;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31);
        enum { arg_size=32 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30,
        typename Arg31
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef Arg31 _31;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31);
        enum { arg_size=32 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30,
        typename Arg31
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef Arg31 _31;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31);
        typedef ClassType class_type;
        enum { arg_size=32 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30,
        typename Arg31,
        typename Arg32
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31,
        Arg32)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef Arg31 _31;
        typedef Arg32 _32;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32);
        enum { arg_size=33 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30,
        typename Arg31,
        typename Arg32
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31,
        Arg32)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef Arg31 _31;
        typedef Arg32 _32;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32);
        enum { arg_size=33 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30,
        typename Arg31,
        typename Arg32
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31,
        Arg32)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef Arg31 _31;
        typedef Arg32 _32;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32);
        typedef ClassType class_type;
        enum { arg_size=33 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30,
        typename Arg31,
        typename Arg32,
        typename Arg33
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31,
        Arg32,
        Arg33)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef Arg31 _31;
        typedef Arg32 _32;
        typedef Arg33 _33;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33);
        enum { arg_size=34 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30,
        typename Arg31,
        typename Arg32,
        typename Arg33
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31,
        Arg32,
        Arg33)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef Arg31 _31;
        typedef Arg32 _32;
        typedef Arg33 _33;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33);
        enum { arg_size=34 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30,
        typename Arg31,
        typename Arg32,
        typename Arg33
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31,
        Arg32,
        Arg33)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef Arg31 _31;
        typedef Arg32 _32;
        typedef Arg33 _33;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33);
        typedef ClassType class_type;
        enum { arg_size=34 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30,
        typename Arg31,
        typename Arg32,
        typename Arg33,
        typename Arg34
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31,
        Arg32,
        Arg33,
        Arg34)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef Arg31 _31;
        typedef Arg32 _32;
        typedef Arg33 _33;
        typedef Arg34 _34;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33,
            Arg34);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33,
            Arg34);
        enum { arg_size=35 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30,
        typename Arg31,
        typename Arg32,
        typename Arg33,
        typename Arg34
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31,
        Arg32,
        Arg33,
        Arg34)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef Arg31 _31;
        typedef Arg32 _32;
        typedef Arg33 _33;
        typedef Arg34 _34;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33,
            Arg34);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33,
            Arg34);
        enum { arg_size=35 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30,
        typename Arg31,
        typename Arg32,
        typename Arg33,
        typename Arg34
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31,
        Arg32,
        Arg33,
        Arg34)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef Arg31 _31;
        typedef Arg32 _32;
        typedef Arg33 _33;
        typedef Arg34 _34;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33,
            Arg34);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33,
            Arg34);
        typedef ClassType class_type;
        enum { arg_size=35 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30,
        typename Arg31,
        typename Arg32,
        typename Arg33,
        typename Arg34,
        typename Arg35
    >
    class FunctionType<ReturnType(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31,
        Arg32,
        Arg33,
        Arg34,
        Arg35)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef Arg31 _31;
        typedef Arg32 _32;
        typedef Arg33 _33;
        typedef Arg34 _34;
        typedef Arg35 _35;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33,
            Arg34,
            Arg35);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33,
            Arg34,
            Arg35);
        enum { arg_size=36 };
    };

    template<
        typename ReturnType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30,
        typename Arg31,
        typename Arg32,
        typename Arg33,
        typename Arg34,
        typename Arg35
    >
    class FunctionType<ReturnType(*)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31,
        Arg32,
        Arg33,
        Arg34,
        Arg35)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef Arg31 _31;
        typedef Arg32 _32;
        typedef Arg33 _33;
        typedef Arg34 _34;
        typedef Arg35 _35;
        typedef ReturnType(*function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33,
            Arg34,
            Arg35);
        typedef ReturnType(std_function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33,
            Arg34,
            Arg35);
        enum { arg_size=36 };
    };

    template<
        typename ReturnType,
        typename ClassType,
        typename Arg0,
        typename Arg1,
        typename Arg2,
        typename Arg3,
        typename Arg4,
        typename Arg5,
        typename Arg6,
        typename Arg7,
        typename Arg8,
        typename Arg9,
        typename Arg10,
        typename Arg11,
        typename Arg12,
        typename Arg13,
        typename Arg14,
        typename Arg15,
        typename Arg16,
        typename Arg17,
        typename Arg18,
        typename Arg19,
        typename Arg20,
        typename Arg21,
        typename Arg22,
        typename Arg23,
        typename Arg24,
        typename Arg25,
        typename Arg26,
        typename Arg27,
        typename Arg28,
        typename Arg29,
        typename Arg30,
        typename Arg31,
        typename Arg32,
        typename Arg33,
        typename Arg34,
        typename Arg35
    >
    class FunctionType<ReturnType(ClassType:: *)(
        Arg0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31,
        Arg32,
        Arg33,
        Arg34,
        Arg35)>{
        typedef ReturnType return_type;
        typedef Arg0 _0;
        typedef Arg1 _1;
        typedef Arg2 _2;
        typedef Arg3 _3;
        typedef Arg4 _4;
        typedef Arg5 _5;
        typedef Arg6 _6;
        typedef Arg7 _7;
        typedef Arg8 _8;
        typedef Arg9 _9;
        typedef Arg10 _10;
        typedef Arg11 _11;
        typedef Arg12 _12;
        typedef Arg13 _13;
        typedef Arg14 _14;
        typedef Arg15 _15;
        typedef Arg16 _16;
        typedef Arg17 _17;
        typedef Arg18 _18;
        typedef Arg19 _19;
        typedef Arg20 _20;
        typedef Arg21 _21;
        typedef Arg22 _22;
        typedef Arg23 _23;
        typedef Arg24 _24;
        typedef Arg25 _25;
        typedef Arg26 _26;
        typedef Arg27 _27;
        typedef Arg28 _28;
        typedef Arg29 _29;
        typedef Arg30 _30;
        typedef Arg31 _31;
        typedef Arg32 _32;
        typedef Arg33 _33;
        typedef Arg34 _34;
        typedef Arg35 _35;
        typedef ReturnType(ClassType::* function_type)(
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33,
            Arg34,
            Arg35);
        typedef ReturnType(std_function_type)(
            ClassType:: *,
            Arg0,
            Arg1,
            Arg2,
            Arg3,
            Arg4,
            Arg5,
            Arg6,
            Arg7,
            Arg8,
            Arg9,
            Arg10,
            Arg11,
            Arg12,
            Arg13,
            Arg14,
            Arg15,
            Arg16,
            Arg17,
            Arg18,
            Arg19,
            Arg20,
            Arg21,
            Arg22,
            Arg23,
            Arg24,
            Arg25,
            Arg26,
            Arg27,
            Arg28,
            Arg29,
            Arg30,
            Arg31,
            Arg32,
            Arg33,
            Arg34,
            Arg35);
        typedef ClassType class_type;
        enum { arg_size=36 };
    };

}

#endif
