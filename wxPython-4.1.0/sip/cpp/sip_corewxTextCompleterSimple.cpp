/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/textcompleter.h>



class sipwxTextCompleterSimple : public  ::wxTextCompleterSimple
{
public:
    sipwxTextCompleterSimple();
    virtual ~sipwxTextCompleterSimple();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void GetCompletions(const  ::wxString&, ::wxArrayString&) SIP_OVERRIDE;
    bool Start(const  ::wxString&) SIP_OVERRIDE;
     ::wxString GetNext() SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxTextCompleterSimple(const sipwxTextCompleterSimple &);
    sipwxTextCompleterSimple &operator = (const sipwxTextCompleterSimple &);

    char sipPyMethods[3];
};

sipwxTextCompleterSimple::sipwxTextCompleterSimple():  ::wxTextCompleterSimple(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxTextCompleterSimple::~sipwxTextCompleterSimple()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxTextCompleterSimple::GetCompletions(const  ::wxString& prefix, ::wxArrayString& res)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_TextCompleterSimple,sipName_GetCompletions);

    if (!sipMeth)
        return;

    extern void sipVH__core_158(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&, ::wxArrayString&);

    sipVH__core_158(sipGILState, 0, sipPySelf, sipMeth, prefix, res);
}

bool sipwxTextCompleterSimple::Start(const  ::wxString& prefix)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_Start);

    if (!sipMeth)
        return  ::wxTextCompleterSimple::Start(prefix);

    extern bool sipVH__core_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    return sipVH__core_9(sipGILState, 0, sipPySelf, sipMeth, prefix);
}

 ::wxString sipwxTextCompleterSimple::GetNext()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_GetNext);

    if (!sipMeth)
        return  ::wxTextCompleterSimple::GetNext();

    extern  ::wxString sipVH__core_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_11(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxTextCompleterSimple_GetCompletions, "GetCompletions(prefix) -> res\n"
"\n"
"Pure virtual method returning all possible completions for the given\n"
"prefix.");

extern "C" {static PyObject *meth_wxTextCompleterSimple_GetCompletions(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextCompleterSimple_GetCompletions(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::wxString* prefix;
        int prefixState = 0;
         ::wxArrayString* res;
         ::wxTextCompleterSimple *sipCpp;

        static const char *sipKwdList[] = {
            sipName_prefix,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxTextCompleterSimple, &sipCpp, sipType_wxString,&prefix, &prefixState))
        {
            res = new  ::wxArrayString();

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_TextCompleterSimple, sipName_GetCompletions);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->GetCompletions(*prefix,*res);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(prefix),sipType_wxString,prefixState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(res,sipType_wxArrayString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextCompleterSimple, sipName_GetCompletions, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextCompleterSimple_Start, "Start(prefix) -> bool\n"
"\n"
"Function called to start iteration over the completions for the given\n"
"prefix.");

extern "C" {static PyObject *meth_wxTextCompleterSimple_Start(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextCompleterSimple_Start(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* prefix;
        int prefixState = 0;
         ::wxTextCompleterSimple *sipCpp;

        static const char *sipKwdList[] = {
            sipName_prefix,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxTextCompleterSimple, &sipCpp, sipType_wxString,&prefix, &prefixState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxTextCompleterSimple::Start(*prefix) : sipCpp->Start(*prefix));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(prefix),sipType_wxString,prefixState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextCompleterSimple, sipName_Start, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextCompleterSimple_GetNext, "GetNext() -> String\n"
"\n"
"Called to retrieve the next completion.");

extern "C" {static PyObject *meth_wxTextCompleterSimple_GetNext(PyObject *, PyObject *);}
static PyObject *meth_wxTextCompleterSimple_GetNext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxTextCompleterSimple *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextCompleterSimple, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxTextCompleterSimple::GetNext() : sipCpp->GetNext()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextCompleterSimple, sipName_GetNext, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxTextCompleterSimple(void *, const sipTypeDef *);}
static void *cast_wxTextCompleterSimple(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxTextCompleterSimple *sipCpp = reinterpret_cast< ::wxTextCompleterSimple *>(sipCppV);

    if (targetType == sipType_wxTextCompleter)
        return static_cast< ::wxTextCompleter *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxTextCompleterSimple(void *, int);}
static void release_wxTextCompleterSimple(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxTextCompleterSimple *>(sipCppV);
    else
        delete reinterpret_cast< ::wxTextCompleterSimple *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxTextCompleterSimple(sipSimpleWrapper *);}
static void dealloc_wxTextCompleterSimple(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxTextCompleterSimple *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxTextCompleterSimple(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxTextCompleterSimple(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxTextCompleterSimple(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxTextCompleterSimple *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxTextCompleterSimple();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxTextCompleterSimple[] = {{549, 255, 1}};


static PyMethodDef methods_wxTextCompleterSimple[] = {
    {SIP_MLNAME_CAST(sipName_GetCompletions), SIP_MLMETH_CAST(meth_wxTextCompleterSimple_GetCompletions), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextCompleterSimple_GetCompletions)},
    {SIP_MLNAME_CAST(sipName_GetNext), meth_wxTextCompleterSimple_GetNext, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTextCompleterSimple_GetNext)},
    {SIP_MLNAME_CAST(sipName_Start), SIP_MLMETH_CAST(meth_wxTextCompleterSimple_Start), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextCompleterSimple_Start)}
};

sipVariableDef variables_wxTextCompleterSimple[] = {
    {PropertyVariable, sipName_Next, &methods_wxTextCompleterSimple[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxTextCompleterSimple, "A simpler base class for custom completer objects.");


sipClassTypeDef sipTypeDef__core_wxTextCompleterSimple = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxTextCompleterSimple,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_TextCompleterSimple,
        {0, 0, 1},
        3, methods_wxTextCompleterSimple,
        0, SIP_NULLPTR,
        1, variables_wxTextCompleterSimple,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxTextCompleterSimple,
    -1,
    -1,
    supers_wxTextCompleterSimple,
    SIP_NULLPTR,
    init_type_wxTextCompleterSimple,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_wxTextCompleterSimple,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxTextCompleterSimple,
    cast_wxTextCompleterSimple,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};