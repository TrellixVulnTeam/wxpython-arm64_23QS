/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/graphics.h>

        #include <wx/graphics.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxGraphicsFont(void *, const sipTypeDef *);}
static void *cast_wxGraphicsFont(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxGraphicsFont *sipCpp = reinterpret_cast< ::wxGraphicsFont *>(sipCppV);

    if (targetType == sipType_wxGraphicsObject)
        return static_cast< ::wxGraphicsObject *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGraphicsFont(void *, int);}
static void release_wxGraphicsFont(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxGraphicsFont *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxGraphicsFont(void *, SIP_SSIZE_T, void *);}
static void assign_wxGraphicsFont(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxGraphicsFont *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxGraphicsFont *>(sipSrc);
}


extern "C" {static void *array_wxGraphicsFont(SIP_SSIZE_T);}
static void *array_wxGraphicsFont(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxGraphicsFont[sipNrElem];
}


extern "C" {static void *copy_wxGraphicsFont(const void *, SIP_SSIZE_T);}
static void *copy_wxGraphicsFont(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxGraphicsFont(reinterpret_cast<const  ::wxGraphicsFont *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxGraphicsFont(sipSimpleWrapper *);}
static void dealloc_wxGraphicsFont(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGraphicsFont(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxGraphicsFont(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGraphicsFont(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxGraphicsFont *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGraphicsFont();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxGraphicsFont* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxGraphicsFont, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGraphicsFont(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxGraphicsFont[] = {{229, 255, 1}};

PyDoc_STRVAR(doc_wxGraphicsFont, "A wxGraphicsFont is a native representation of a font.");


sipClassTypeDef sipTypeDef__core_wxGraphicsFont = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxGraphicsFont,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_GraphicsFont,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGraphicsFont,
    -1,
    -1,
    supers_wxGraphicsFont,
    SIP_NULLPTR,
    init_type_wxGraphicsFont,
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
    dealloc_wxGraphicsFont,
    assign_wxGraphicsFont,
    array_wxGraphicsFont,
    copy_wxGraphicsFont,
    release_wxGraphicsFont,
    cast_wxGraphicsFont,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};