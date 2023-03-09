# https://stackoverflow.com/a/3061610
HEADER=all_kinematics.h
echo "#ifndef __ALL_KINEMATICS__" > $HEADER
echo "#define __ALL_KINEMATICS__" >> $HEADER
for file in kin/*.h
do
    echo "#include \"$file\"" >> $HEADER
done
echo "#endif" >> $HEADER


HEADER=all_kinematics_fixarm.h
echo "#ifndef __ALL_KINEMATICS_FIXARM__" > $HEADER
echo "#define __ALL_KINEMATICS_FIXARM__" >> $HEADER
for file in kinFixArm/*.h
do
    echo "#include \"$file\"" >> $HEADER
done
echo "#endif" >> $HEADER